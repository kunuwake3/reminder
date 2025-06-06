# Server Inventory Portable (Qt + SQLCipher)

**Кроссплатформенный self-hosted portable менеджер серверов с полной шифрацией базы.**

---

## Возможности
- Шифрование всей базы (AES-256, SQLCipher)
- Мастер-пароль (не хранится в базе)
- Portable: нет сетевых функций, вся папка переносима между Linux/Windows
- Простой UI: добавление, удаление, просмотр серверов

---

## Системные требования
- Qt 5.15.2 (Linux/Windows)
- SQLCipher (`libqt5sql5-sqlcipher` для Linux, `sqlcipher` для Windows)
- C++11+

---

## Как собрать вручную

### **Linux:**
```bash
sudo apt update
sudo apt install qtbase5-dev qt5-qmake libqt5sql5-sqlcipher sqlcipher
qmake
make
./m3
