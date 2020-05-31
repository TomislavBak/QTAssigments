#include "gui_prob.h"
#include "ui_gui_prob.h"

GUI_PROB::GUI_PROB(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GUI_PROB)
{
    ui->setupUi(this);
}

GUI_PROB::~GUI_PROB()
{
    delete ui;
}

