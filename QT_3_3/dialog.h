#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QWidget>
#include<QtGui>
#include<QFileSystemModel>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::Dialog *ui;
    QFileSystemModel *dirmodel; // za prikazhuvanje na direktoriumi
    QFileSystemModel *filemodel; // za prikazhuvanje na files
};
#endif // DIALOG_H
