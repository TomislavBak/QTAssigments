#include <QCoreApplication>
#include<QList>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int>List;
    for(int i = 0;i<10;i++){
        List.append(i);

    }

    QMutableListIterator<int>Iter(List);
    while(Iter.hasNext()){
    int i = Iter.next();
    if(i == 5){
        Iter.remove();
    }
    }
    return a.exec();
}
