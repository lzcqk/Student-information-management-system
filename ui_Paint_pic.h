/********************************************************************************
** Form generated from reading UI file 'Paint_pic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_PIC_H
#define UI_PAINT_PIC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint_pic
{
public:
    QLabel *label;

    void setupUi(QWidget *Paint_pic)
    {
        if (Paint_pic->objectName().isEmpty())
            Paint_pic->setObjectName(QString::fromUtf8("Paint_pic"));
        Paint_pic->resize(440, 380);
        Paint_pic->setMinimumSize(QSize(440, 380));
        Paint_pic->setMaximumSize(QSize(440, 380));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Paint_pic->setWindowIcon(icon);
        label = new QLabel(Paint_pic);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 440, 380));
        label->setMinimumSize(QSize(440, 380));
        label->setMaximumSize(QSize(440, 380));
        label->setPixmap(QPixmap(QString::fromUtf8(":/white.png")));

        retranslateUi(Paint_pic);

        QMetaObject::connectSlotsByName(Paint_pic);
    } // setupUi

    void retranslateUi(QWidget *Paint_pic)
    {
        Paint_pic->setWindowTitle(QApplication::translate("Paint_pic", "\346\210\220\347\273\251\345\210\206\345\270\203", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Paint_pic: public Ui_Paint_pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_PIC_H
