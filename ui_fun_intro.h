/********************************************************************************
** Form generated from reading UI file 'fun_intro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUN_INTRO_H
#define UI_FUN_INTRO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fun_intro
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *fun_intro)
    {
        if (fun_intro->objectName().isEmpty())
            fun_intro->setObjectName(QString::fromUtf8("fun_intro"));
        fun_intro->resize(400, 300);
        fun_intro->setMinimumSize(QSize(400, 300));
        fun_intro->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        fun_intro->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(fun_intro);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(fun_intro);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/my_app_ico.ico")));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        label_3 = new QLabel(fun_intro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        label_3->setFont(font);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(fun_intro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        label = new QLabel(fun_intro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        retranslateUi(fun_intro);

        QMetaObject::connectSlotsByName(fun_intro);
    } // setupUi

    void retranslateUi(QWidget *fun_intro)
    {
        fun_intro->setWindowTitle(QApplication::translate("fun_intro", "\345\212\237\350\203\275\344\273\213\347\273\215", nullptr));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("fun_intro", "\346\234\254\347\263\273\347\273\237\347\224\261\350\207\252\345\212\250\345\214\226\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242\346\231\272\350\203\275\347\247\221\345\255\246\344\270\216\346\212\200\346\234\2572\347\217\255\342\200\224\342\200\224\346\235\216\346\263\275\350\257\232\345\274\200\345\217\221\343\200\202", nullptr));
        label_2->setText(QApplication::translate("fun_intro", "\346\234\254\347\263\273\347\273\237\346\224\257\346\214\201\345\257\271.txt\345\222\214.dat\347\261\273\345\236\213\347\232\204\346\226\207\344\273\266\350\277\233\350\241\214\346\223\215\344\275\234\357\274\214\345\217\257\345\244\204\347\220\206\347\232\204\346\210\220\347\273\251\345\214\272\351\227\264\344\270\2720~100\357\274\214\345\234\250\345\221\275\345\220\215\346\226\207\344\273\266\346\230\257\350\257\267\345\221\275\345\220\215\344\270\272 \347\247\221\347\233\256\345\220\215\347\247\260 + .txt \346\210\226\350\200\205 \347\247\221\347\233\256\345\220\215\347\247\260 + _info.dat \344\273\245\345\205\215\347\225\214\351\235\242\344\270\255\347\247\221\347\233\256\347\232\204\350\257\215\346\235\241\346\230\276\347\244\272\351\224\231\350\257\257\343\200\202", nullptr));
        label->setText(QApplication::translate("fun_intro", "\346\210\220\347\273\251\345\210\206\345\270\203\345\233\276\357\274\210Score distribution.jpg\357\274\211\344\273\245\345\217\212.csv\346\226\207\344\273\266\357\274\210\347\247\221\347\233\256\345\220\215\347\247\260 + .csv\357\274\211\345\217\257\344\273\245\345\234\250\345\220\214\347\272\247\346\226\207\344\273\266\345\244\271\344\270\255\346\237\245\347\234\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fun_intro: public Ui_fun_intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUN_INTRO_H
