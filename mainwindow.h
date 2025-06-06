#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "main_m1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const QString &masterPassword, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();
    void on_actionAddServer_triggered();
    void on_actionDeleteServer_triggered();
    void on_actionAbout_triggered();

    // Можно добавить свои слоты (копирование, оплачено, напоминания и т.д.)

private:
    Ui::MainWindow *ui;
    Main_M1 *core;
    QString dbPath;
    QString masterPassword;

    void refreshServers();
};

#endif // MAINWINDOW_H
