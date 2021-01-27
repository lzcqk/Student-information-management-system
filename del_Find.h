#ifndef DEL_FIND_H
#define DEL_FIND_H

#include <QWidget>
#include"defin.h"
#include"Tool.h"
#include"show_stu_info.h"
#include<qevent.h>

namespace Ui {
class del_Find;
}

class del_Find : public QWidget
{
    Q_OBJECT

public:
    explicit del_Find(QWidget *parent = nullptr);
    ~del_Find();
    void keyPressEvent(QKeyEvent* e);
    void set_type(student* stu, string File_name,int _type);

signals:
    void success_del_Find();

private slots:
    void on_pushButton_clicked();

private:
    Ui::del_Find *ui;
    int ui_type;
    Tool del_Find_T;
    string in_file_name;
    student* in_stu;
};

#endif // DEL_FIND_H
