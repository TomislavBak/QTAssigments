#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QODBC"); // driver
    db.setHostName("LOCALHOST\\SQLEXPRESS");
    db.setDatabaseName("mydsn32");

    db.open();

    model = new QSqlQueryModel(this);
    model->setQuery("SELECT INTO [test].[dbo].[People] ([FirstName],[LastName]) VALUES(:first,:last)");

    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    db.close();
    delete ui;
}

