#ifndef BANBEN_H
#define BANBEN_H

#include <QWidget>
#include"defin.h"

namespace Ui {
class banben;
}

class banben : public QWidget
{
    Q_OBJECT

public:
    explicit banben(QWidget *parent = nullptr);
    ~banben();

private:
    Ui::banben *ui;
};

#endif // BANBEN_H
