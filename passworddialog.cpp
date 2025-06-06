#include "passworddialog.h"
#include "ui_passworddialog.h"

PasswordDialog::PasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);
    setWindowTitle("Enter master password");
    ui->lineEdit->setEchoMode(QLineEdit::Password);

    connect(ui->showPasswordCheckBox, &QCheckBox::toggled,
            this, &PasswordDialog::on_showPasswordCheckBox_toggled);

    // Фокус на поле пароля при открытии
    ui->lineEdit->setFocus();
}

PasswordDialog::~PasswordDialog()
{
    delete ui;
}

QString PasswordDialog::password() const
{
    return ui->lineEdit->text();
}

void PasswordDialog::on_showPasswordCheckBox_toggled(bool checked)
{
    ui->lineEdit->setEchoMode(checked ? QLineEdit::Normal : QLineEdit::Password);
}
