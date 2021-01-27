#include "add_new.h"
#include "ui_add_new.h"


add_new::add_new(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_new)
{
    in_file_name = "";
    in_index = 0;
    in_stu = new student;
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
}

add_new::~add_new()
{
    Window_num = 0;
    delete ui;
}

void add_new::keyPressEvent(QKeyEvent* e) 
{
    if (e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter)
    {
        if (ui->lineEdit_num->hasFocus()) ui->lineEdit_name->setFocus();
        else if (ui->lineEdit_name->hasFocus()) ui->lineEdit_score->setFocus();
        else if (ui->lineEdit_score->hasFocus()) ui->lineEdit_place->setFocus();
        else if (ui->lineEdit_place->hasFocus()) on_pushButton_2_clicked();
    }
}

void add_new::get_info(student* stu, string File_name)
{
    in_stu = stu;
    in_file_name = File_name;
}

void add_new::on_pushButton_2_clicked()
{
    student *inner_student = new student;
    inner_student->info.study_num = ui->lineEdit_num->text().toInt();
    if (inner_student->info.study_num <= 0) 
    {
        QMessageBox::critical(NULL,"警告","学号不为负数", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else if (inner_student->info.score > max_score || inner_student->info.score < 0)
    {
        string s = "警告";
        string s2 = "分数超过处理区间";
        QMessageBox::critical(NULL, QString::fromStdString(s), QString::fromStdString(s2), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else
    {
        memcpy(inner_student->info.name, ui->lineEdit_name->text().toLocal8Bit(), ui->lineEdit_name->text().toLocal8Bit().size() + 1);
        inner_student->info.score = ui->lineEdit_score->text().toInt();
        in_index = ui->lineEdit_place->text().toInt();
        in_stu = add_T.insert_info(in_stu, inner_student, in_index);
        if (flag_Tool == 1)
        {
            flag_Tool = 0;
            add_T.save_info(in_stu, in_file_name, 0);
            emit success_add();
            QMessageBox::information(NULL, "提示", "信息添加成功", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            add_new::~add_new();
        }
    }
}

void add_new::on_pushButton_3_clicked()
{
    add_new::~add_new();
}
