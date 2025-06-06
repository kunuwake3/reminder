/********************************************************************************
** Form generated from reading UI file 'editprv.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRV_H
#define UI_EDITPRV_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editprv
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_1;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *save_btn;
    QPushButton *cancel_edit;
    QPushButton *edit_btn;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *upd_all_base;

    void setupUi(QDialog *editprv)
    {
        if (editprv->objectName().isEmpty())
            editprv->setObjectName(QStringLiteral("editprv"));
        editprv->setWindowModality(Qt::NonModal);
        editprv->resize(1071, 558);
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
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(64, 64, 64, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
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
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        editprv->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        editprv->setFont(font);
        editprv->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton = new QPushButton(editprv);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(910, 520, 151, 31));
        horizontalLayoutWidget = new QWidget(editprv);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1051, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_1 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_1->sizePolicy().hasHeightForWidth());
        lineEdit_1->setSizePolicy(sizePolicy);
        lineEdit_1->setMaxLength(50);

        horizontalLayout->addWidget(lineEdit_1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaxLength(50);

        horizontalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMaxLength(150);
        lineEdit_3->setFrame(true);

        horizontalLayout->addWidget(lineEdit_3);

        save_btn = new QPushButton(horizontalLayoutWidget);
        save_btn->setObjectName(QStringLiteral("save_btn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/m3.png"), QSize(), QIcon::Normal, QIcon::On);
        save_btn->setIcon(icon);

        horizontalLayout->addWidget(save_btn);

        cancel_edit = new QPushButton(horizontalLayoutWidget);
        cancel_edit->setObjectName(QStringLiteral("cancel_edit"));

        horizontalLayout->addWidget(cancel_edit);

        edit_btn = new QPushButton(horizontalLayoutWidget);
        edit_btn->setObjectName(QStringLiteral("edit_btn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/m7.png"), QSize(), QIcon::Normal, QIcon::On);
        edit_btn->setIcon(icon1);

        horizontalLayout->addWidget(edit_btn);

        tableView = new QTableView(editprv);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 891, 501));
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->verticalHeader()->setVisible(false);
        pushButton_3 = new QPushButton(editprv);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(970, 110, 89, 25));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(editprv);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 60, 151, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/m6.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon2);
        upd_all_base = new QPushButton(editprv);
        upd_all_base->setObjectName(QStringLiteral("upd_all_base"));
        upd_all_base->setGeometry(QRect(960, 170, 89, 25));
        upd_all_base->setFocusPolicy(Qt::NoFocus);
        QWidget::setTabOrder(lineEdit_1, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, save_btn);
        QWidget::setTabOrder(save_btn, cancel_edit);
        QWidget::setTabOrder(cancel_edit, edit_btn);
        QWidget::setTabOrder(edit_btn, pushButton_2);
        QWidget::setTabOrder(pushButton_2, tableView);
        QWidget::setTabOrder(tableView, pushButton);
        QWidget::setTabOrder(pushButton, upd_all_base);
        QWidget::setTabOrder(upd_all_base, pushButton_3);

        retranslateUi(editprv);

        QMetaObject::connectSlotsByName(editprv);
    } // setupUi

    void retranslateUi(QDialog *editprv)
    {
        editprv->setWindowTitle(QApplication::translate("editprv", "Edit Hosters", nullptr));
        pushButton->setText(QApplication::translate("editprv", "Close", nullptr));
        label->setText(QApplication::translate("editprv", "Name of Hosting", nullptr));
        label_2->setText(QApplication::translate("editprv", "Link (web)", nullptr));
        label_3->setText(QApplication::translate("editprv", "Information", nullptr));
        save_btn->setText(QApplication::translate("editprv", "Save", nullptr));
        cancel_edit->setText(QApplication::translate("editprv", "Cancel", nullptr));
        edit_btn->setText(QApplication::translate("editprv", "Add new hoster", nullptr));
        pushButton_3->setText(QApplication::translate("editprv", "Update", nullptr));
        pushButton_2->setText(QApplication::translate("editprv", "Delete selected", nullptr));
        upd_all_base->setText(QApplication::translate("editprv", "Update base", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editprv: public Ui_editprv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRV_H
