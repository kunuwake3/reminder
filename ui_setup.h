/********************************************************************************
** Form generated from reading UI file 'setup.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_H
#define UI_SETUP_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setup
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pass;
    QLabel *label;
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Setup)
    {
        if (Setup->objectName().isEmpty())
            Setup->setObjectName(QStringLiteral("Setup"));
        Setup->resize(549, 341);
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
        Setup->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        Setup->setFont(font);
        Setup->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton = new QPushButton(Setup);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 300, 111, 31));
        pushButton_3 = new QPushButton(Setup);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 300, 141, 31));
        horizontalLayoutWidget_2 = new QWidget(Setup);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 110, 491, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pass = new QLineEdit(horizontalLayoutWidget_2);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setMaxLength(50);
        pass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(pass);

        label = new QLabel(Setup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 81, 31));
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);
        label_3 = new QLabel(Setup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 441, 17));
        groupBox = new QGroupBox(Setup);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 170, 491, 91));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 60, 111, 28));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 471, 21));
        QPalette palette1;
        QBrush brush10(QColor(252, 233, 79, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_5->setPalette(palette1);
        QFont font2;
        font2.setPointSize(8);
        label_5->setFont(font2);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(385, 60, 101, 28));
        QWidget::setTabOrder(pass, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(Setup);

        QMetaObject::connectSlotsByName(Setup);
    } // setupUi

    void retranslateUi(QDialog *Setup)
    {
        Setup->setWindowTitle(QApplication::translate("Setup", "Login", nullptr));
        pushButton->setText(QApplication::translate("Setup", "Cancel", nullptr));
        pushButton_3->setText(QApplication::translate("Setup", "Open Base", nullptr));
        label_2->setText(QApplication::translate("Setup", "Password", nullptr));
        label->setText(QApplication::translate("Setup", "Login", nullptr));
        label_3->setText(QApplication::translate("Setup", "Base is crypted. Please enter password for resume", nullptr));
        groupBox->setTitle(QApplication::translate("Setup", "Selected file", nullptr));
        pushButton_2->setText(QApplication::translate("Setup", "Change base", nullptr));
        label_5->setText(QApplication::translate("Setup", "TextLabel", nullptr));
        pushButton_4->setText(QApplication::translate("Setup", "New base", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setup: public Ui_Setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_H
