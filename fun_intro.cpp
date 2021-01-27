#include "fun_intro.h"
#include "ui_fun_intro.h"

fun_intro::fun_intro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fun_intro)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
}

fun_intro::~fun_intro()
{
    Window_num_2 = 0;
    delete ui;
}
