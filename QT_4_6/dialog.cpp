#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("LOCALHOST\\SQLEXPRESS");

    db.setDatabaseName("mydsn32");

    db.open();

    model = new QSqlRelationalTableModel(this);

    model->setTable("People");// pristap do tabelata
    model->setRelation(0,QSqlRelation("wages","id","salarie"));// relacija pomegju dve tabeli
    model->select();

    ui->tableView->setModel(model);





}

Dialog::~Dialog()
{
    db.close();
    delete ui;
}

