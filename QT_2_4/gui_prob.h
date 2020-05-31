#ifndef GUI_PROB_H
#define GUI_PROB_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class GUI_PROB; }
QT_END_NAMESPACE

class GUI_PROB : public QDialog
{
    Q_OBJECT

public:
    GUI_PROB(QWidget *parent = nullptr);
    ~GUI_PROB();

private:
    Ui::GUI_PROB *ui;
};
#endif // GUI_PROB_H
