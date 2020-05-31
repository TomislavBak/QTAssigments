#include "dialog.h"
#include "ui_dialog.h"
#include<QInputDialog>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QDirModel(this);
    model->setReadOnly(false); // da ne e read only

    //Sortiranje

    model->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name ); // sortiranje po direktoriumi po ime



    ui->treeView->setModel(model);
    QModelIndex index = model->index("C:/"); // ne e pozhelno vaka da se praj

    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->resizeColumnToContents(0);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
//make dir
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid())return;

    QString name = QInputDialog::getText(this,"Name","Enter a name");

    if(name.isEmpty()) return;

    model->mkdir(index,name);
}

void Dialog::on_pushButton_2_clicked()
{
//delete dir
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid())return;

    if(model->fileInfo(index).isDir()){
        // dir
        model->rmdir(index);
    }
    else{
        // file
        model->remove(index);
    }
}
