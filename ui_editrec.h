/********************************************************************************
** Form generated from reading UI file 'editrec.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITREC_H
#define UI_EDITREC_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditRec
{
public:
    QPushButton *eClose;
    QPushButton *OkBtn;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *pass_host;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLineEdit *login_host;
    QPushButton *pushButton_5;
    QComboBox *hosts;
    QPushButton *pushButton_15;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLineEdit *login_mail;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *pass_mail;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPlainTextEdit *textedit;
    QComboBox *country;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QDateEdit *dateEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QDateEdit *dateEdit_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_2;
    QLineEdit *price;
    QComboBox *cur;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *login1;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *pass1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *ip_addr;
    QPushButton *pushButton_6;

    void setupUi(QDialog *EditRec)
    {
        if (EditRec->objectName().isEmpty())
            EditRec->setObjectName(QStringLiteral("EditRec"));
        EditRec->setWindowModality(Qt::NonModal);
        EditRec->resize(813, 460);
        QPalette palette;
        QBrush brush(QColor(240, 240, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(54, 54, 54, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(81, 81, 81, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(67, 67, 67, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(27, 27, 27, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(36, 36, 36, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(64, 64, 64, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        EditRec->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        EditRec->setFont(font);
        EditRec->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        eClose = new QPushButton(EditRec);
        eClose->setObjectName(QStringLiteral("eClose"));
        eClose->setGeometry(QRect(700, 420, 101, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/m8.png"), QSize(), QIcon::Normal, QIcon::On);
        eClose->setIcon(icon);
        eClose->setAutoDefault(false);
        OkBtn = new QPushButton(EditRec);
        OkBtn->setObjectName(QStringLiteral("OkBtn"));
        OkBtn->setGeometry(QRect(580, 420, 111, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/m3.png"), QSize(), QIcon::Normal, QIcon::On);
        OkBtn->setIcon(icon1);
        OkBtn->setAutoDefault(false);
        pushButton = new QPushButton(EditRec);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 50, 28, 28));
        pushButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/m5.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon2);
        pushButton->setAutoDefault(false);
        groupBox = new QGroupBox(EditRec);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 260, 351, 191));
        groupBox->setFlat(true);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 150, 331, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        pass_host = new QLineEdit(horizontalLayoutWidget);
        pass_host->setObjectName(QStringLiteral("pass_host"));
        pass_host->setMaxLength(70);
        pass_host->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_8->addWidget(pass_host);

        pushButton_11 = new QPushButton(horizontalLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/m10.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_11->setIcon(icon3);
        pushButton_11->setFlat(true);

        horizontalLayout_8->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(horizontalLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/m11.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_12->setIcon(icon4);
        pushButton_12->setFlat(true);

        horizontalLayout_8->addWidget(pushButton_12);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 110, 331, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        login_host = new QLineEdit(horizontalLayoutWidget_2);
        login_host->setObjectName(QStringLiteral("login_host"));
        login_host->setMaxLength(70);

        horizontalLayout_9->addWidget(login_host);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 40, 31, 28));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_5->setIcon(icon2);
        hosts = new QComboBox(groupBox);
        hosts->setObjectName(QStringLiteral("hosts"));
        hosts->setGeometry(QRect(5, 40, 301, 28));
        pushButton_15 = new QPushButton(groupBox);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(218, 76, 121, 25));
        QFont font1;
        font1.setPointSize(9);
        pushButton_15->setFont(font1);
        pushButton_15->setIcon(icon4);
        pushButton_15->setAutoDefault(false);
        groupBox_2 = new QGroupBox(EditRec);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 90, 411, 121));
        groupBox_2->setFlat(true);
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 41, 391, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_3->addWidget(label_12);

        login_mail = new QLineEdit(layoutWidget);
        login_mail->setObjectName(QStringLiteral("login_mail"));
        login_mail->setMaxLength(70);

        horizontalLayout_3->addWidget(login_mail);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 81, 391, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(label_13);

        pass_mail = new QLineEdit(layoutWidget1);
        pass_mail->setObjectName(QStringLiteral("pass_mail"));
        pass_mail->setMaxLength(70);
        pass_mail->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_4->addWidget(pass_mail);

        pushButton_13 = new QPushButton(layoutWidget1);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setFocusPolicy(Qt::NoFocus);
        pushButton_13->setIcon(icon3);
        pushButton_13->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(layoutWidget1);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setFocusPolicy(Qt::NoFocus);
        pushButton_14->setIcon(icon4);
        pushButton_14->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_14);

        textedit = new QPlainTextEdit(EditRec);
        textedit->setObjectName(QStringLiteral("textedit"));
        textedit->setGeometry(QRect(390, 220, 411, 191));
        textedit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        country = new QComboBox(EditRec);
        country->setObjectName(QStringLiteral("country"));
        country->setGeometry(QRect(110, 50, 207, 28));
        country->setEditable(false);
        country->setMaxVisibleItems(16);
        label_2 = new QLabel(EditRec);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(35, 51, 61, 20));
        pushButton_3 = new QPushButton(EditRec);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 420, 141, 31));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/m6.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon5);
        pushButton_3->setAutoDefault(false);
        pushButton_4 = new QPushButton(EditRec);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(808, 0, 1, 1));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_4->setAutoDefault(false);
        layoutWidget2 = new QWidget(EditRec);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(390, 10, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        dateEdit = new QDateEdit(layoutWidget2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit->setMinimumDate(QDate(1999, 1, 1));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2020, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        layoutWidget3 = new QWidget(EditRec);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(390, 50, 411, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        dateEdit_2 = new QDateEdit(layoutWidget3);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit_2->setMinimumDate(QDate(1999, 1, 1));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2099, 1, 1));

        horizontalLayout_2->addWidget(dateEdit_2);

        groupBox_3 = new QGroupBox(EditRec);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 351, 81));
        groupBox_3->setFlat(true);
        groupBox_3->setCheckable(false);
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 40, 28, 28));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setIcon(icon2);
        pushButton_2->setAutoDefault(false);
        price = new QLineEdit(groupBox_3);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(20, 40, 167, 28));
        price->setMaxLength(12);
        cur = new QComboBox(groupBox_3);
        cur->setObjectName(QStringLiteral("cur"));
        cur->setGeometry(QRect(190, 40, 116, 28));
        cur->setEditable(false);
        cur->setMaxVisibleItems(16);
        layoutWidget4 = new QWidget(EditRec);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 90, 311, 30));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        login1 = new QLineEdit(layoutWidget4);
        login1->setObjectName(QStringLiteral("login1"));
        login1->setMaxLength(70);
        login1->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_5->addWidget(login1);

        pushButton_7 = new QPushButton(layoutWidget4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/m10.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon6);
        pushButton_7->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(layoutWidget4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_9->setIcon(icon4);
        pushButton_9->setFlat(true);

        horizontalLayout_5->addWidget(pushButton_9);

        layoutWidget5 = new QWidget(EditRec);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(40, 130, 311, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget5);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        pass1 = new QLineEdit(layoutWidget5);
        pass1->setObjectName(QStringLiteral("pass1"));
        pass1->setMaxLength(70);
        pass1->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_6->addWidget(pass1);

        pushButton_8 = new QPushButton(layoutWidget5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_8->setIcon(icon3);
        pushButton_8->setFlat(true);

        horizontalLayout_6->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(layoutWidget5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFocusPolicy(Qt::NoFocus);
        pushButton_10->setIcon(icon4);
        pushButton_10->setFlat(true);

        horizontalLayout_6->addWidget(pushButton_10);

        layoutWidget6 = new QWidget(EditRec);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(40, 10, 311, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        ip_addr = new QLineEdit(layoutWidget6);
        ip_addr->setObjectName(QStringLiteral("ip_addr"));
        ip_addr->setMaxLength(50);
        ip_addr->setClearButtonEnabled(false);

        horizontalLayout_7->addWidget(ip_addr);

        pushButton_6 = new QPushButton(EditRec);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 30, 21, 25));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        QWidget::setTabOrder(ip_addr, country);
        QWidget::setTabOrder(country, login1);
        QWidget::setTabOrder(login1, pass1);
        QWidget::setTabOrder(pass1, price);
        QWidget::setTabOrder(price, cur);
        QWidget::setTabOrder(cur, hosts);
        QWidget::setTabOrder(hosts, pushButton_15);
        QWidget::setTabOrder(pushButton_15, login_host);
        QWidget::setTabOrder(login_host, pass_host);
        QWidget::setTabOrder(pass_host, dateEdit);
        QWidget::setTabOrder(dateEdit, dateEdit_2);
        QWidget::setTabOrder(dateEdit_2, login_mail);
        QWidget::setTabOrder(login_mail, pass_mail);
        QWidget::setTabOrder(pass_mail, textedit);
        QWidget::setTabOrder(textedit, OkBtn);
        QWidget::setTabOrder(OkBtn, eClose);
        QWidget::setTabOrder(eClose, pushButton_3);

        retranslateUi(EditRec);

        QMetaObject::connectSlotsByName(EditRec);
    } // setupUi

    void retranslateUi(QDialog *EditRec)
    {
        EditRec->setWindowTitle(QApplication::translate("EditRec", "Record Edit", nullptr));
        eClose->setText(QApplication::translate("EditRec", "Close", nullptr));
        OkBtn->setText(QApplication::translate("EditRec", "Ok", nullptr));
        pushButton->setText(QString());
        groupBox->setTitle(QApplication::translate("EditRec", "Hosting ", nullptr));
        label_7->setText(QApplication::translate("EditRec", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_11->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Show password (provider)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_11->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_12->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Copy password (provider) to clipboard</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_12->setText(QString());
        label_6->setText(QApplication::translate("EditRec", "Login", nullptr));
        pushButton_5->setText(QString());
        pushButton_15->setText(QApplication::translate("EditRec", "Copy host LINK", nullptr));
        groupBox_2->setTitle(QApplication::translate("EditRec", "Email account", nullptr));
        label_12->setText(QApplication::translate("EditRec", "Login", nullptr));
        label_13->setText(QApplication::translate("EditRec", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_13->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Show password (email)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_13->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_14->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Copy Password (email) to clipboard</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_14->setText(QString());
        textedit->setPlaceholderText(QApplication::translate("EditRec", "Information", nullptr));
        label_2->setText(QApplication::translate("EditRec", "Country", nullptr));
        pushButton_3->setText(QApplication::translate("EditRec", "Delete record", nullptr));
        pushButton_4->setText(QApplication::translate("EditRec", "Load_c_c", nullptr));
        label_10->setText(QApplication::translate("EditRec", "First payment", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("EditRec", "dd.MM.yyyy", nullptr));
        label_11->setText(QApplication::translate("EditRec", "Next payment", nullptr));
        dateEdit_2->setDisplayFormat(QApplication::translate("EditRec", "dd.MM.yyyy", nullptr));
        groupBox_3->setTitle(QApplication::translate("EditRec", "Price", nullptr));
        pushButton_2->setText(QString());
        label_8->setText(QApplication::translate("EditRec", "Login", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Show Login</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Copy Login to clipboard</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QString());
        label_9->setText(QApplication::translate("EditRec", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Show password</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("EditRec", "<html><head/><body><p>Copy Password to clipboard</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QString());
        label->setText(QApplication::translate("EditRec", "IP address", nullptr));
        pushButton_6->setText(QApplication::translate("EditRec", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditRec: public Ui_EditRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITREC_H
