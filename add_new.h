#ifndef ADD_NEW_H
#define ADD_NEW_H

#include <QWidget>
#include"defin.h"
#include"student.h"
#include"add_new.h"
#include"Tool.h"
#include<qevent.h>

namespace Ui {
class add_new;
}

class add_new : public QWidget
{
    Q_OBJECT

public:
    explicit add_new(QWidget *parent = nullptr);
    ~add_new();
    void get_info(student* stu, string File_name);
    void keyPressEvent(QKeyEvent* e);

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

signals:
    void success_add();              

private:
    Ui::add_new *ui;
    Tool add_T;
    string in_file_name;
    int in_index;
    student* in_stu;
};

#endif // ADD_NEW_H
