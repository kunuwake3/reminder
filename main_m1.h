#ifndef MAIN_M1_H
#define MAIN_M1_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QVariantList>

class Main_M1 : public QObject
{
    Q_OBJECT
public:
    explicit Main_M1(QObject *parent = nullptr);

    // Открытие шифрованной базы (portable, SQLCipher)
    bool openDatabase(const QString &dbPath, const QString &masterPassword);

    // Проверка, открыта ли БД
    bool isOpen() const;

    // Работа с серверами (пример)
    QVariantList getAllServers();
    bool addServer(const QVariantList &fields);
    bool deleteServer(int id);

    // и др. методы по необходимости

private:
    QSqlDatabase db;
};

#endif // MAIN_M1_H
