#ifndef MAIN_M1_H
#define MAIN_M1_H

#include <QObject>
#include <QSqlDatabase>
#include <QString>
#include <QVariantList>
#include "simplecrypt.h"

class Main_M1 : public QObject
{
    Q_OBJECT
public:
    explicit Main_M1(QObject *parent = nullptr);

    bool openDatabase(const QString &dbPath, const QString &masterPassword);

    bool isOpen() const;

    QVariantList getAllServers();
    bool addServer(const QVariantList &fields);
    bool deleteServer(int id);

private:
    QSqlDatabase db;
    SimpleCrypt *crypt;
    quint64 deriveKey(const QString &password);
};

#endif // MAIN_M1_H
