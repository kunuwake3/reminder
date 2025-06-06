#ifndef SIMPLECRYPT_H
#define SIMPLECRYPT_H

#include <QString>
#include <QByteArray>

class SimpleCrypt
{
public:
    explicit SimpleCrypt(quint64 key);

    QString encryptToString(const QString &plaintext);
    QString decryptToString(const QString &ciphertext);

private:
    quint64 m_key;
};

#endif // SIMPLECRYPT_H
