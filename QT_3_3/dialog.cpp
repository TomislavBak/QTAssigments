#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString sPath = "C:/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setRootPath(sPath);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs); // da se prikazhuvaat samo dir bez dot
    ui->treeView->setModel(dirmodel);

    QModelIndex index = dirmodel->index(sPath, 0);
    ui->treeView->setRootIndex(index);




    filemodel = new QFileSystemModel(this);
    filemodel->setRootPath(sPath);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);// se prikazhuvaat samo files
    ui->listView->setModel(filemodel);

    index = filemodel->index(sPath, 0);
    ui->listView->setRootIndex(index);


}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_treeView_clicked(const QModelIndex &index)
{
   QString rPath = dirmodel->fileInfo(index).absoluteFilePath(); // go zemame patot na datotekata shoe kliknata
   ui->listView->setRootIndex(filemodel->setRootPath(rPath)); // go smestuvame patot
}
