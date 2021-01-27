/********************************************************************************
** Form generated from reading UI file 'add_new.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_NEW_H
#define UI_ADD_NEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_new
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QLineEdit *lineEdit_num;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QLineEdit *lineEdit_name;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_5;
    QLineEdit *lineEdit_score;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *lineEdit_place;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *add_new)
    {
        if (add_new->objectName().isEmpty())
            add_new->setObjectName(QString::fromUtf8("add_new"));
        add_new->resize(400, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(add_new->sizePolicy().hasHeightForWidth());
        add_new->setSizePolicy(sizePolicy);
        add_new->setMinimumSize(QSize(400, 350));
        add_new->setMaximumSize(QSize(400, 350));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        add_new->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(add_new);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_3 = new QWidget(add_new);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(add_new);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        lineEdit_num = new QLineEdit(widget_2);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Unicode MS"));
        lineEdit_num->setFont(font2);

        horizontalLayout_4->addWidget(lineEdit_num);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(add_new);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);

        lineEdit_name = new QLineEdit(widget_4);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setFont(font2);

        horizontalLayout_6->addWidget(lineEdit_name);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(add_new);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_score = new QLineEdit(widget);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));
        lineEdit_score->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit_score);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);


        verticalLayout->addWidget(widget);

        widget_6 = new QWidget(add_new);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEdit_place = new QLineEdit(widget_6);
        lineEdit_place->setObjectName(QString::fromUtf8("lineEdit_place"));
        lineEdit_place->setMaximumSize(QSize(50, 16777215));
        lineEdit_place->setFont(font2);

        horizontalLayout->addWidget(lineEdit_place);


        verticalLayout->addWidget(widget_6);

        widget_5 = new QWidget(add_new);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        pushButton_2->setFont(font3);

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font3);

        horizontalLayout_7->addWidget(pushButton_3);


        verticalLayout->addWidget(widget_5);


        retranslateUi(add_new);

        QMetaObject::connectSlotsByName(add_new);
    } // setupUi

    void retranslateUi(QWidget *add_new)
    {
        add_new->setWindowTitle(QApplication::translate("add_new", "\346\267\273\345\212\240\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("add_new", "\350\257\267\345\241\253\345\206\231\351\234\200\350\246\201\346\267\273\345\212\240\347\232\204\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_3->setText(QApplication::translate("add_new", "\345\255\246\345\217\267\357\274\232", nullptr));
        lineEdit_num->setText(QString());
        label_4->setText(QApplication::translate("add_new", "\345\247\223\345\220\215\357\274\232", nullptr));
        lineEdit_name->setText(QString());
        label_5->setText(QApplication::translate("add_new", "\346\210\220\347\273\251\357\274\232", nullptr));
        lineEdit_score->setText(QString());
        label_2->setText(QApplication::translate("add_new", "\346\217\222\345\205\245\344\275\215\347\275\256\357\274\232", nullptr));
        lineEdit_place->setText(QString());
        pushButton_2->setText(QApplication::translate("add_new", "\347\241\256\350\256\244", nullptr));
        pushButton_3->setText(QApplication::translate("add_new", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_new: public Ui_add_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_NEW_H
