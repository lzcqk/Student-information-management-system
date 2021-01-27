#ifndef REGIS_H
#define REGIS_H
#include<QMouseEvent>
#include <QWidget>
#include<QDebug>

namespace Ui {
class regis;
}

class regis : public QWidget
{
    Q_OBJECT

public:
    explicit regis(QWidget *parent = nullptr);
    ~regis();
    void keyPressEvent(QKeyEvent* e);
    int read_dat(char name[]);
    int get_User_info();

private slots:
    void on_btn_accept_clicked();
    void on_btn_close_clicked();

private:
    Ui::regis *ui;
    bool eventFilter(QObject *watched, QEvent *event);
    
};

#endif // REGIS_H
