QT += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = m3
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    main_m1.cpp \
    editrec.cpp \
    editcur.cpp \
    editcountry.cpp \
    editprv.cpp \
    messageslist.cpp \
    setup.cpp \
    errbase.cpp \
    simplecrypt.cpp \
    passworddialog.cpp

HEADERS += \
    mainwindow.h \
    main_m1.h \
    editrec.h \
    editcur.h \
    editcountry.h \
    editprv.h \
    messageslist.h \
    setup.h \
    errbase.h \
    simplecrypt.h \
    passworddialog.h

FORMS += \
    mainwindow.ui \
    editrec.ui \
    editcur.ui \
    editcountry.ui \
    editprv.ui \
    messageslist.ui \
    setup.ui \
    errbase.ui \
    passworddialog.ui

RESOURCES +=

# --- Portable: база и настройки в той же папке ---
CONFIG += c++11

# --- Линковка SQLCipher вместо обычного SQLite ---
unix:!macx {
    LIBS += -lsqlcipher
    # Если в системе нет отдельного пакета, можно использовать libsqlite3, но лучше sqlcipher!
}
win32 {
    # Здесь путь к SQLCipher (установить заранее или через vcpkg/choco)
    LIBS += -llibsqlcipher
    # Если используете MinGW, путь к libsqlcipher.dll.a в LIBS
    # Если MSVC — путь к .lib-файлу
    # Указать путь к dll в PATH при запуске (или положить рядом)
}

INCLUDEPATH += .
DEPENDPATH += .

# --- Убрать абсолютные пути, всё только относительное ---
