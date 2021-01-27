#include "system_MW.h"
#include"Welcome_W.h"
#include <QApplication>
#include<QTextCodec>

int main(int argc, char *argv[])
{
    QApplication *a = new QApplication(argc, argv);
    Welcome_W* w = new Welcome_W;
    QApplication::addLibraryPath("./plugins");
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    w->show();
    a->exec();
}
