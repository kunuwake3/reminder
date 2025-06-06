#include "mainwindow.h"
#include "main_m1.h"
#include "passworddialog.h"

#include <QApplication>
#include <QMessageBox>
#include <QTimer>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Запрос мастер-пароля при запуске
    PasswordDialog pwdDialog;
    if (pwdDialog.exec() != QDialog::Accepted) {
        return 0; // Если отмена — выход
    }
    QString masterPassword = pwdDialog.password();

    // Передаём пароль в бизнес-логику
    MainWindow w(masterPassword);
    w.show();

    return a.exec();
}
