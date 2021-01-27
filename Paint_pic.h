#ifndef PAINT_PIC_H
#define PAINT_PIC_H

#include <QWidget>
#include"student.h"
#include<QPainter>
#include"defin.h"

namespace Ui {
class Paint_pic;
}

class Paint_pic : public QWidget
{
    Q_OBJECT

public:
    explicit Paint_pic(QWidget *parent = nullptr);
    ~Paint_pic();
    void get_data(student* stu);

private:
    Ui::Paint_pic *ui;
};

#endif // PAINT_PIC_H
