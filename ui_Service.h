/********************************************************************************
** Form generated from reading UI file 'Service.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICE_H
#define UI_SERVICE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Service
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QWidget *Service)
    {
        if (Service->objectName().isEmpty())
            Service->setObjectName(QString::fromUtf8("Service"));
        Service->resize(400, 301);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Service->sizePolicy().hasHeightForWidth());
        Service->setSizePolicy(sizePolicy);
        Service->setMinimumSize(QSize(400, 301));
        Service->setMaximumSize(QSize(400, 301));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Service->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Service);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Service);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Service);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Service);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Service);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(Service);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Service);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(Service);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(Service);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(Service);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(Service);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(Service);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(Service);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(Service);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        verticalLayout->addWidget(label_13);


        retranslateUi(Service);

        QMetaObject::connectSlotsByName(Service);
    } // setupUi

    void retranslateUi(QWidget *Service)
    {
        Service->setWindowTitle(QApplication::translate("Service", "\346\234\215\345\212\241\345\215\217\350\256\256\345\222\214\351\232\220\347\247\201\346\224\277\347\255\226", nullptr));
        label->setText(QApplication::translate("Service", "\346\254\242\350\277\216\350\256\277\351\227\256\345\255\246\347\224\237\347\256\241\347\220\206\344\277\241\346\201\257\347\263\273\347\273\237\343\200\202", nullptr));
        label_2->setText(QApplication::translate("Service", "\345\234\250\346\263\250\345\206\214\345\255\246\347\224\237\347\256\241\347\220\206\344\277\241\346\201\257\347\263\273\347\273\237\346\210\226\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\344\277\241\346\201\257\347\263\273\347\273\237\344\271\213\345\211\215\357\274\214", nullptr));
        label_3->setText(QApplication::translate("Service", "\350\257\267\345\212\241\345\277\205\345\256\241\346\205\216\351\230\205\350\257\273\343\200\201\345\205\205\345\210\206\347\220\206\350\247\243\346\234\254\347\224\250\346\210\267\345\215\217\350\256\256\357\274\210\344\270\213\347\247\260\342\200\234\346\234\254\346\234\215\345\212\241\346\235\241", nullptr));
        label_4->setText(QApplication::translate("Service", "\346\254\276\342\200\235\357\274\211\343\200\201\351\232\220\347\247\201\346\224\277\347\255\226\343\200\201\350\257\232\344\277\241\345\256\210\345\210\231\345\222\214Cookie\346\224\277\347\255\226\347\232\204\345\206\205\345\256\271\357\274\214\347\211\271", nullptr));
        label_5->setText(QApplication::translate("Service", "\345\210\253\346\230\257\345\205\215\351\231\244\346\210\226\351\231\220\345\210\266\350\264\243\344\273\273\347\232\204\346\235\241\346\254\276\357\274\214\351\231\220\345\210\266\343\200\201\345\205\215\350\264\243\346\235\241\346\254\276\345\217\257\350\203\275\344\273\245\351\273\221", nullptr));
        label_6->setText(QApplication::translate("Service", "\344\275\223\345\212\240\347\262\227\345\275\242\345\274\217\346\217\220\347\244\272\346\202\250\346\263\250\346\204\217\343\200\202", nullptr));
        label_7->setText(QApplication::translate("Service", "\346\234\254\346\234\215\345\212\241\346\235\241\346\254\276\343\200\201\351\232\220\347\247\201\346\224\277\347\255\226\343\200\201\350\257\232\344\277\241\345\256\210\345\210\231\346\230\257\346\202\250\344\270\216\345\255\246\347\224\237\347\256\241\347\220\206\344\277\241\346\201\257\347\263\273", nullptr));
        label_8->setText(QApplication::translate("Service", "\347\273\237\344\271\213\351\227\264\347\232\204\345\215\217\350\256\256\357\274\210\344\270\213\347\247\260\342\200\234\346\234\254\345\215\217\350\256\256\342\200\235\357\274\211\343\200\202\344\270\215\350\256\272\346\202\250\346\230\257\345\220\246\344\270\272\346\263\250\345\206\214", nullptr));
        label_9->setText(QApplication::translate("Service", "\347\224\250\346\210\267\357\274\214\346\202\250\344\275\277\347\224\250\346\234\254\344\272\247\345\223\201\350\275\257\344\273\266\345\215\263\350\247\206\344\270\272\346\202\250\345\267\262\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217\346\216\245\345\217\227\346\234\254", nullptr));
        label_10->setText(QApplication::translate("Service", "\345\215\217\350\256\256\347\232\204\347\272\246\346\235\237\343\200\202\345\246\202\346\236\234\346\202\250\344\270\215\345\270\214\346\234\233\345\217\227\346\234\254\345\215\217\350\256\256\346\235\241\346\254\276\347\232\204\347\272\246\346\235\237\357\274\214\346\210\221\344\273\254", nullptr));
        label_11->setText(QApplication::translate("Service", "\345\260\206\346\227\240\346\263\225\344\270\272\346\202\250\346\217\220\344\276\233\346\234\215\345\212\241\343\200\202", nullptr));
        label_12->setText(QApplication::translate("Service", "\345\246\202\346\236\234\346\202\250\346\234\252\346\273\241 18 \345\221\250\345\262\201\357\274\214\350\257\267\345\234\250\346\263\225\345\256\232\347\233\221\346\212\244\344\272\272\347\232\204\347\233\221\346\212\244\343\200\201\346\214\207\345\257\274\344\270\213", nullptr));
        label_13->setText(QApplication::translate("Service", "\351\230\205\350\257\273\346\234\254\345\215\217\350\256\256\345\222\214\344\275\277\347\224\250\346\234\254\344\272\247\345\223\201\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Service: public Ui_Service {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICE_H
