#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QFileDialog>
#include <QDir>
#include <QVariantList>

MainWindow::MainWindow(const QString &masterPassword, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , core(new Main_M1(this))
    , masterPassword(masterPassword)
{
    ui->setupUi(this);

    // Portable: база в той же папке, что и exe (или .AppImage)
    dbPath = QDir::current().filePath("f3_base.db");

    if (!core->openDatabase(dbPath, masterPassword)) {
        QMessageBox::critical(this, "Error", "Cannot open encrypted database with provided password!");
        qApp->quit();
        return;
    }

    refreshServers();

    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::on_actionExit_triggered);
    connect(ui->actionAddServer, &QAction::triggered, this, &MainWindow::on_actionAddServer_triggered);
    connect(ui->actionDeleteServer, &QAction::triggered, this, &MainWindow::on_actionDeleteServer_triggered);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::on_actionAbout_triggered);

    // Тут можно подключить и другие действия (копирование, оплата, напоминания и т.д.)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshServers()
{
    // Таблица: обновляем данные
    QVariantList servers = core->getAllServers();
    ui->tableWidget->setRowCount(servers.size());
    for (int i = 0; i < servers.size(); ++i) {
        QVariantList row = servers[i].toList();
        for (int j = 0; j < row.size(); ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(row[j].toString());
            ui->tableWidget->setItem(i, j, item);
        }
    }
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionAddServer_triggered()
{
    // Пример простого диалога для добавления (можно расширять!)
    QString ip = QInputDialog::getText(this, "Add Server", "IP:");
    QString country = QInputDialog::getText(this, "Add Server", "Country:");
    QString next_payment = QInputDialog::getText(this, "Add Server", "Next payment (YYYY-MM-DD):");
    QString price = QInputDialog::getText(this, "Add Server", "Price:");
    QString provider = QInputDialog::getText(this, "Add Server", "Provider:");
    QString name = QInputDialog::getText(this, "Add Server", "Name:");
    QString extra = QInputDialog::getText(this, "Add Server", "Extra info:");

    QVariantList fields;
    fields << ip << country << next_payment << price << provider << name << extra;
    if (core->addServer(fields)) {
        refreshServers();
    } else {
        QMessageBox::warning(this, "Add failed", "Could not add server.");
    }
}

void MainWindow::on_actionDeleteServer_triggered()
{
    // Удаляем выделенную строку
    int row = ui->tableWidget->currentRow();
    if (row < 0) return;
    int id = ui->tableWidget->item(row, 0)->text().toInt();
    if (core->deleteServer(id)) {
        refreshServers();
    } else {
        QMessageBox::warning(this, "Delete failed", "Could not delete server.");
    }
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About", "Portable Server Inventory (Qt + SQLCipher)\nAll data encrypted, portable and cross-platform.");
}
