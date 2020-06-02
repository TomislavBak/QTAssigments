#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);


    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("LOCALHOST\\SQLEXPRESS");
    db.setDatabaseName("mydsn32");


    db.open();

    model = new QSqlTableModel(this);
    model->setTable("People");
    model->select();

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

