#include "mainwindow.h"
#include<QtGui>
#include<QtWidgets>
#include <QApplication>
#include<QGridLayout>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget *window = new QWidget;

    QGridLayout *layout = new QGridLayout;
    QLabel *label1 = new QLabel("Name:");

    QLineEdit *txtName = new QLineEdit;

    layout->addWidget(label1,0,0);
    layout->addWidget(txtName,0,1);


    QLabel *label2 = new QLabel("Name:");

    QLineEdit *txtName2 = new QLineEdit;

    layout->addWidget(label2,1,0);
    layout->addWidget(txtName2,1,1);


    QPushButton *button = new QPushButton("OK");
    layout->addWidget(button,2,0,1,2);

    window->setLayout(layout);
    window->show();
    //w.show();
    return a.exec();
}
