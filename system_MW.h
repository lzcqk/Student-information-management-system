#ifndef SYSTEM_MW_H
#define SYSTEM_MW_H

#include <QMainWindow>
#include"student.h"
#include"defin.h"
#include"Tool.h"
#include"add_new.h"
#include"del_Find.h"
#include"banben.h"
#include"fun_intro.h"
#include"Paint_pic.h"

QT_BEGIN_NAMESPACE
namespace Ui { class system_MW; }
QT_END_NAMESPACE

class system_MW : public QMainWindow
{
    Q_OBJECT

public:
    student *Sum_stu;
    system_MW(QWidget *parent = nullptr);
    ~system_MW();
    void keyPressEvent(QKeyEvent* e);
    void show_on_UI(student* stu, int page_num);           
    void simple_add();
    void simple_del();
    void simple_Find();
    void simple_draw();

private slots:
    int on_pushButton_clicked();

    void on_But_next_clicked();

    void on_But_per_clicked();

    void on_radioButton_moren_clicked();

    void on_radioButton_score_up_clicked();

    void on_radioButton_scor_low_clicked();

    void on_radioButton_num_up_clicked();

    void on_radioButton_num_low_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_save_clicked();

public slots:
    void show_on();

private:
    Ui::system_MW *ui;
    Tool MW_T;
    int first_time;
    int num_sort;                    //排序形态
    int btn_sort;                      //标志排序按钮是否被按下
    string S_path;                    //用于存储由QString类型转换而来的string类型
};
#endif // SYSTEM_MW_H
