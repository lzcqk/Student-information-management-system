#ifndef FUN_INTRO_H
#define FUN_INTRO_H

#include <QWidget>
#include"defin.h"

namespace Ui {
class fun_intro;
}

class fun_intro : public QWidget
{
    Q_OBJECT

public:
    explicit fun_intro(QWidget *parent = nullptr);
    ~fun_intro();

private:
    Ui::fun_intro *ui;
};

#endif // FUN_INTRO_H
