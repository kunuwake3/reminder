#include "main_m1.h"
#include <QSqlError>
#include <QDebug>
#include <QFile>

Main_M1::Main_M1(QObject *parent) : QObject(parent)
{
}

bool Main_M1::openDatabase(const QString &dbPath, const QString &masterPassword)
{
    // Portable режим: всегда явно removeDatabase!
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

    // Ключ для SQLCipher — шифрует всю базу!
    QSqlQuery pragmaQuery(db);
    QString pragmaCmd = QString("PRAGMA key = '%1';").arg(masterPassword);
    if (!pragmaQuery.exec(pragmaCmd)) {
        qDebug() << "Ошибка применения ключа SQLCipher:" << pragmaQuery.lastError().text();
        db.close();
        return false;
    }

    // Проверка: таблица серверов, если нет — создаём (portable режим)
    QSqlQuery testQuery(db);
    if (!testQuery.exec("SELECT name FROM sqlite_master WHERE type='table' AND name='servers';") || !testQuery.next()) {
        QSqlQuery createQuery(db);
        bool ok = createQuery.exec(
            "CREATE TABLE servers ("
            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
            "ip TEXT,"
            "country TEXT,"
            "next_payment DATE,"
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
    if (!db.isOpen())
        return servers;
    QSqlQuery q("SELECT id, ip, country, next_payment, price, provider, name, extra FROM servers;", db);
    while (q.next()) {
        QVariantList row;
        for (int i = 0; i < q.record().count(); ++i) {
            row << q.value(i);
        }
        servers << QVariant(row);
    }
    return servers;
}

bool Main_M1::addServer(const QVariantList &fields)
{
    if (!db.isOpen())
        return false;
    QSqlQuery q(db);
    q.prepare("INSERT INTO servers (ip, country, next_payment, price, provider, name, extra) "
              "VALUES (?, ?, ?, ?, ?, ?, ?);");
    for (int i = 0; i < fields.size(); ++i)
        q.addBindValue(fields[i]);
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
