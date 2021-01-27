#ifndef SHOW_STU_INFO_H
#define SHOW_STU_INFO_H

#include <QWidget>
#include"student.h"

namespace Ui {
class show_stu_info;
}

class show_stu_info : public QWidget
{
    Q_OBJECT

public:
    explicit show_stu_info(QWidget *parent = nullptr);
    ~show_stu_info();
    void set_label(student* stu);

private:
    Ui::show_stu_info *ui;
};

#endif // SHOW_STU_INFO_H
