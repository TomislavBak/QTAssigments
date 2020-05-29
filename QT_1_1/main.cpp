#include <QCoreApplication>
#include<QtDebug>
#include<QDir>
#include<QFileInfo>
#include<QString>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // proverka dali nekoj file postoi
    QDir mDir("C:/Desktop");
    qDebug()<<mDir.exists();


    // listanje na site diskovi

    foreach(QFileInfo mItm,mDir.drives()){
        qDebug()<<mItm.absoluteFilePath();
    }

    // kreiranje na datoteka so pateka

    QDir mDir1;
    QString mPath = "C:/Users/Tomislav1/Desktop/AAA";

    if(!mDir1.exists(mPath)){
        mDir1.mkpath(mPath);
        qDebug()<<"Created";
    }
    else{
        qDebug()<<"Already exists";
    }

    // listanje na site dir
    foreach(QFileInfo mitm, mDir1.entryInfoList()){
        if(mitm.isDir()) qDebug()<<"Dir"<<mitm.absoluteFilePath();
    }

    return a.exec();
}
