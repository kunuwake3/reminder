/********************************************************************************
** Form generated from reading UI file 'errbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRBASE_H
#define UI_ERRBASE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errbase
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *passw1;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit;

    void setupUi(QDialog *errbase)
    {
        if (errbase->objectName().isEmpty())
            errbase->setObjectName(QStringLiteral("errbase"));
        errbase->resize(621, 445);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
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
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
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
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
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
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        errbase->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        errbase->setFont(font);
        errbase->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label = new QLabel(errbase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 591, 41));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        pushButton = new QPushButton(errbase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 340, 191, 51));
        pushButton->setAutoDefault(false);
        pushButton_2 = new QPushButton(errbase);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 210, 471, 51));
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(errbase);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 270, 471, 51));
        pushButton_3->setAutoDefault(false);
        label_4 = new QLabel(errbase);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 60, 571, 17));
        frame = new QFrame(errbase);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 400, 621, 45));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        QBrush brush10(QColor(136, 138, 133, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(204, 207, 200, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(170, 172, 166, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(68, 69, 66, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(91, 92, 89, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush15(QColor(46, 52, 54, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush16(QColor(195, 196, 194, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        frame->setPalette(palette1);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 289, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        label_2->setPalette(palette2);
        QFont font2;
        font2.setPointSize(8);
        label_2->setFont(font2);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 631, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        label_3->setPalette(palette3);
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_5 = new QLabel(errbase);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 80, 601, 17));
        horizontalLayoutWidget = new QWidget(errbase);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 160, 471, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        passw1 = new QLineEdit(horizontalLayoutWidget);
        passw1->setObjectName(QStringLiteral("passw1"));
        passw1->setMaxLength(40);
        passw1->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout->addWidget(passw1);

        horizontalLayoutWidget_2 = new QWidget(errbase);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(90, 120, 471, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(250);

        horizontalLayout_2->addWidget(lineEdit);

        QWidget::setTabOrder(lineEdit, passw1);
        QWidget::setTabOrder(passw1, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton);

        retranslateUi(errbase);

        QMetaObject::connectSlotsByName(errbase);
    } // setupUi

    void retranslateUi(QDialog *errbase)
    {
        errbase->setWindowTitle(QApplication::translate("errbase", "PreSetup", nullptr));
        label->setText(QApplication::translate("errbase", "Database not found.", nullptr));
        pushButton->setText(QApplication::translate("errbase", "Cancel", nullptr));
        pushButton_2->setText(QApplication::translate("errbase", "Create NEW Database", nullptr));
        pushButton_3->setText(QApplication::translate("errbase", "Open an existing database", nullptr));
        label_4->setText(QApplication::translate("errbase", "You can create a new database, or specify the path to the database file", nullptr));
        label_2->setText(QApplication::translate("errbase", "Application tried to open the database:", nullptr));
        label_3->setText(QApplication::translate("errbase", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("errbase", "(in format SqLite)", nullptr));
        label_6->setText(QApplication::translate("errbase", "Password", nullptr));
        label_7->setText(QApplication::translate("errbase", "File name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errbase: public Ui_errbase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRBASE_H
