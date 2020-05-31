#ifndef DIALOG_H
#define DIALOG_H
#include<QWidget>
#include <QDialog>
#include<QtGui>
#include<QDirModel>
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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    QDirModel *model; // pointer model za dir
};
#endif // DIALOG_H
