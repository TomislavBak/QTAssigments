#include <QCoreApplication>
#include<QDebug>
#include<QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int>List;
    for(int i = 0;i<10;i++){
        List.append(i);

    }

    QListIterator<int>Iter(List);
    while(Iter.hasNext()){
        qDebug()<<Iter.next();
    }
    // istata lista vo reverse(peek za da vidime koj e sleden element no bez da odime do nego)
    Iter.toBack();
    while(Iter.hasPrevious()){
        qDebug()<<Iter.previous();
        qDebug()<<"next..."<<Iter.peekPrevious();
    }

    return a.exec();
}
