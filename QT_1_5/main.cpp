#include <QCoreApplication>
#include<QDebug>
#include<QLinkedList>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // QLinkedList ne se vo istiot del od memorijata site imat pointer na naredniot element
    //brzo vrishi i dodava elementi ama sporo chita elementi
    QLinkedList<int> List;

    List<<1<<3<<5;
    foreach(int i,List){
        qDebug()<<i;
    }


    return a.exec();
}
