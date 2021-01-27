#include "show_stu_info.h"
#include "ui_show_stu_info.h"

show_stu_info::show_stu_info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_stu_info)
{
    ui->setupUi(this);
}

show_stu_info::~show_stu_info()
{
    delete ui;
}

void show_stu_info::set_label(student* stu)
{
    ui->label_num->setText(QString::number(stu->info.study_num));
    ui->label_name->setText(QString::fromLocal8Bit(stu->info.name));
    ui->label_score->setText(QString::number(stu->info.score));
}