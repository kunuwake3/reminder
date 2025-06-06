#include "main_m1.h"
#include <QSqlError>
#include <QDebug>
#include <QCryptographicHash>
#include <QSqlQuery>
#include <QSqlRecord>

Main_M1::Main_M1(QObject *parent) : QObject(parent), crypt(nullptr)
{
}

quint64 Main_M1::deriveKey(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    quint64 key = 0;
    for (int i = 0; i < 8; ++i)
        key = (key << 8) | (quint8)hash[i];
    return key;
}

bool Main_M1::openDatabase(const QString &dbPath, const QString &masterPassword)
{
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::database("qt_sql_default_connection");
        db.close();
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);
    if (!db.open()) {
        qDebug() << "Ошибка открытия базы:" << db.lastError().text();
        return false;
    }

    // deriveKey и создаём объект SimpleCrypt
    quint64 key = deriveKey(masterPassword);
    if (crypt) delete crypt;
    crypt = new SimpleCrypt(key);

    // Проверка и создание таблицы
    QSqlQuery testQuery(db);
    if (!testQuery.exec("SELECT name FROM sqlite_master WHERE type='table' AND name='servers';") || !testQuery.next()) {
        QSqlQuery createQuery(db);
        bool ok = createQuery.exec(
            "CREATE TABLE servers ("
            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
            "ip TEXT,"
            "country TEXT,"
            "next_payment TEXT,"
            "price TEXT,"
            "provider TEXT,"
            "name TEXT,"
            "extra TEXT"
            ");"
        );
        if (!ok) {
            qDebug() << "Ошибка создания таблицы:" << createQuery.lastError().text();
            db.close();
            return false;
        }
    }
    return true;
}

bool Main_M1::isOpen() const
{
    return db.isOpen();
}

QVariantList Main_M1::getAllServers()
{
    QVariantList servers;
    if (!db.isOpen() || !crypt)
        return servers;

    QSqlQuery q("SELECT id, ip, country, next_payment, price, provider, name, extra FROM servers;", db);
    while (q.next()) {
        QVariantList row;
        row << q.value(0); // id (открытый)
        // остальные поля — дешифруем!
        for (int i = 1; i <= 7; ++i) {
            row << crypt->decryptToString(q.value(i).toString());
        }
        servers << QVariant(row);
    }
    return servers;
}

bool Main_M1::addServer(const QVariantList &fields)
{
    if (!db.isOpen() || !crypt)
        return false;
    QSqlQuery q(db);
    q.prepare("INSERT INTO servers (ip, country, next_payment, price, provider, name, extra) "
              "VALUES (?, ?, ?, ?, ?, ?, ?);");
    for (int i = 0; i < fields.size(); ++i) {
        q.addBindValue(crypt->encryptToString(fields[i].toString()));
    }
    return q.exec();
}

bool Main_M1::deleteServer(int id)
{
    if (!db.isOpen())
        return false;
    QSqlQuery q(db);
    q.prepare("DELETE FROM servers WHERE id = ?;");
    q.addBindValue(id);
    return q.exec();
}
