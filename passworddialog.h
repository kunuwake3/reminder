#ifndef PASSWORDDIALOG_H
#define PASSWORDDIALOG_H

#include <QDialog>

namespace Ui {
class PasswordDialog;
}

class PasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswordDialog(QWidget *parent = nullptr);
    ~PasswordDialog();

    QString password() const;

private slots:
    void on_showPasswordCheckBox_toggled(bool checked);

private:
    Ui::PasswordDialog *ui;
};

#endif // PASSWORDDIALOG_H
