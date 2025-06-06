#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QFileDialog>
#include <QDir>
#include <QVariantList>
#include <QClipboard>
#include <QDate>

MainWindow::MainWindow(const QString &masterPassword, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , core(new Main_M1(this))
    , masterPassword(masterPassword)
{
    ui->setupUi(this);

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
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &MainWindow::on_tableWidget_cellClicked);

    // Убедимся, что статусбар есть
    if (!statusBar()) setStatusBar(new QStatusBar(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshServers()
{
    QVariantList servers = core->getAllServers();
    ui->tableWidget->setRowCount(servers.size());
    for (int i = 0; i < servers.size(); ++i) {
        QVariantList row = servers[i].toList();
        for (int j = 0; j < row.size(); ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(row[j].toString());
            ui->tableWidget->setItem(i, j, item);
        }
        // Цветовая индикация по next_payment (столбец 3)
        colorizeRow(i, row[3].toString());
    }
}

void MainWindow::colorizeRow(int row, const QString &nextPayment)
{
    if (nextPayment.isEmpty())
        return;
    QDate today = QDate::currentDate();
    QDate payDate = QDate::fromString(nextPayment, "yyyy-MM-dd");
    if (!payDate.isValid())
        return;

    QColor color;
    int daysLeft = today.daysTo(payDate);

    if (daysLeft < 0) // просрочено
        color = QColor(255, 80, 80); // красный
    else if (daysLeft <= 3)
        color = QColor(255, 255, 150); // желтый
    else
        return;

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
        QTableWidgetItem *item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(color);
    }
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionAddServer_triggered()
{
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

void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (!item) return;
    QString value = item->text();

    // Копируем в буфер обмена
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(value);

    statusBar()->showMessage(QString("Copied: %1").arg(value), 2000);
}

