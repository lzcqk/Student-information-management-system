#ifndef SERVICE_H
#define SERVICE_H

#include <QWidget>

namespace Ui {
class Service;
}

class Service : public QWidget
{
    Q_OBJECT

public:
    explicit Service(QWidget *parent = nullptr);
    ~Service();

private:
    Ui::Service *ui;
};

#endif // SERVICE_H
