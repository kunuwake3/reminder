#ifndef EDITREC_H
#define EDITREC_H

#include <QDialog>
#include <QKeyEvent>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class EditRec;
}

class EditRec : public QDialog {
    Q_OBJECT

public:
    explicit EditRec(QWidget *parent = 0);
    ~EditRec();

private slots:
    // все твои слоты
    void on_eClose_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_textedit_textChanged();
    void on_OkBtn_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_ip_addr_textChanged();
    void on_login1_textChanged();
    void on_pass1_textChanged();
    void on_price_textChanged();
    //  void on_url_host_textChanged();
    void on_login_host_textChanged();
    void on_pass_host_textChanged();
    void on_login_mail_textChanged();
    void on_pass_mail_textChanged();
    void on_dateEdit_dateChanged();
    void on_dateEdit_2_dateChanged();
    void on_country_currentIndexChanged(const QString &arg1);
    void on_cur_currentIndexChanged(const QString &arg1);
    void on_ip_addr_textEdited(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::EditRec *ui;
    int edited = 0;
    int res_edit = 0;
    int res_edit_c1 = 0;
    int odd_ip_input = 0;
    int black_theme = 0;
    QString sets3 = "T";
    QSqlDatabase db1;
    QSqlQuery query;
    quint64 key_x = 123456789;

protected:
    void closeEvent(QCloseEvent *res_e);
    void reject();
    virtual void keyReleaseEvent(QKeyEvent* event);
};

#endif // EDITREC_H


