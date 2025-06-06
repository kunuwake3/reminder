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
```
---

### **Windows::**

Установить Qt 5.15.2 (MSVC или MinGW) + Qt Creator

Установить SQLCipher (через Chocolatey: choco install sqlcipher)

Открыть проект в Qt Creator, собрать Release

---
### **GitHub Actions (CI)::**
Автоматическая сборка portable (Windows + Linux):

При каждом push или pull request файлы m3.exe и m3 + f3_base.db можно скачать из “Artifacts”.

---

### **Как переносить/делиться::**
Всё приложение + база в одной папке.

Передавайте архив целиком (Windows: m3.exe + f3_base.db, Linux: m3 + f3_base.db).

Для доступа нужен только мастер-пароль.

---
### **TODO (дополнительные фичи)::**

Цветовая индикация сроков оплаты

Импорт/экспорт CSV/JSON

Гибкие пользовательские поля

Напоминания и автоматизация продлений

---
### **Безопасность::**
База шифруется полностью (даже если украдут файл, без пароля не открыть)

Нет сетевых функций, никаких внешних API

Код открыт, можно проверить любые механизмы

---
### **Поддержка:::**

Linux, Windows (x86_64)

Qt5, SQLCipher

