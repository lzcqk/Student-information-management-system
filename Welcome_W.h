#ifndef WELCOME_W_H
#define WELCOME_W_H

#include <QWidget>

namespace Ui {
class Welcome_W;
}

class Welcome_W : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome_W(QWidget *parent = nullptr);
    ~Welcome_W();
    void keyPressEvent(QKeyEvent* e);                 //检测回车事件

private slots:

    int get_text();

    void on_btn_accept_pressed();

    void on_btn_close_pressed();

    void on_register_2_pressed();

private:
    Ui::Welcome_W *ui;

};

#endif // WELCOME_W_H
