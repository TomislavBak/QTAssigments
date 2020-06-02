#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStandardItemModel(4,2,this); // broja na redici,koloni,parent

    ui->tableView->setModel(model);

    for(int row = 0;row<4;++row){
        for(int col = 0;col<2;col++){
            QModelIndex index = model->index(row,col,QModelIndex());
            model->setData(index,0);
        }
    }
}

Dialog::~Dialog()
{
    delete ui;
}

