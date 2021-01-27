#include "Service.h"
#include "ui_Service.h"
#include"defin.h"

Service::Service(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Service)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
}

Service::~Service()
{
    Window_num_2 = 0;
    delete ui;
}
