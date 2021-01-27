#include "banben.h"
#include "ui_banben.h"

banben::banben(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::banben)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
}

banben::~banben()
{
    Window_num_2 = 0;
    delete ui;
}
