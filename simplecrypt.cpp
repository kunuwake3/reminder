#include "simplecrypt.h"

SimpleCrypt::SimpleCrypt(quint64 key) : m_key(key) {}

QString SimpleCrypt::encryptToString(const QString &plaintext)
{
    QByteArray ba = plaintext.toUtf8();
    for (int i = 0; i < ba.size(); ++i)
        ba[i] = ba[i] ^ ((m_key >> (8 * (i % 8))) & 0xFF);
    return QString::fromLatin1(ba.toBase64());
}

QString SimpleCrypt::decryptToString(const QString &ciphertext)
{
    QByteArray ba = QByteArray::fromBase64(ciphertext.toLatin1());
    for (int i = 0; i < ba.size(); ++i)
        ba[i] = ba[i] ^ ((m_key >> (8 * (i % 8))) & 0xFF);
    return QString::fromUtf8(ba);
}
