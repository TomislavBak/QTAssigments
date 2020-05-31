#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStringListModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList list;
    list<<"cats"<<"dogs"<<"birds";
    model->setStringList(list);
    ui->listView->setModel(model);
    ui->comboBox->setModel(model);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //add
    int row = model->rowCount();// dodavame nova redica
    model->insertRows(row,1);// ja postavuvame redicata

    QModelIndex index = model->index(row);// go nagojame indeksot na vnesenata redica
    ui->listView->edit(index);// ja editirame spored pozicijata na indeksot
}

void MainWindow::on_pushButton_2_clicked()
{
    //insert
    int row = ui->listView->currentIndex().row();//  pozicijata vo koja sakame da postavime
    model->insertRows(row,1);// ja postavuvame redicata

    QModelIndex index = model->index(row);// go nagojame indeksot na vnesenata redica
    ui->listView->edit(index);// ja editirame spored pozicijata na indeksot
}

void MainWindow::on_pushButton_3_clicked()
{
    //delete

    model->removeRows(ui->listView->currentIndex().row(),1); // go brishime objektot vo modelot mestopolozhba,broj na el
}
