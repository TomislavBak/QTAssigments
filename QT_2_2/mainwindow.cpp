#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   connect(ui->horizontalSlider,&QSlider::valueChanged,
           ui->progressBar,&QProgressBar::setValue);
   connect(ui->horizontalSlider,&QSlider::valueChanged,
           ui->progressBar_2,&QProgressBar::setValue);

}

MainWindow::~MainWindow()
{
    delete ui;
}

