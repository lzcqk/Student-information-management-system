/********************************************************************************
** Form generated from reading UI file 'useful_Tool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEFUL_TOOL_H
#define UI_USEFUL_TOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_useful_Tool
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_note;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *radioButton_num;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *radioButton_name;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *useful_Tool)
    {
        if (useful_Tool->objectName().isEmpty())
            useful_Tool->setObjectName(QString::fromUtf8("useful_Tool"));
        useful_Tool->resize(400, 350);
        useful_Tool->setMinimumSize(QSize(400, 350));
        useful_Tool->setMaximumSize(QSize(400, 350));
        verticalLayout = new QVBoxLayout(useful_Tool);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget_3 = new QWidget(useful_Tool);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_note = new QLabel(widget_3);
        label_note->setObjectName(QString::fromUtf8("label_note"));

        horizontalLayout_3->addWidget(label_note);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(useful_Tool);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        radioButton_num = new QRadioButton(widget);
        radioButton_num->setObjectName(QString::fromUtf8("radioButton_num"));

        horizontalLayout->addWidget(radioButton_num);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        radioButton_name = new QRadioButton(widget);
        radioButton_name->setObjectName(QString::fromUtf8("radioButton_name"));

        horizontalLayout->addWidget(radioButton_name);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(useful_Tool);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(useful_Tool);

        QMetaObject::connectSlotsByName(useful_Tool);
    } // setupUi

    void retranslateUi(QWidget *useful_Tool)
    {
        useful_Tool->setWindowTitle(QApplication::translate("useful_Tool", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
        label_note->setText(QApplication::translate("useful_Tool", "\350\257\267\351\200\211\346\213\251\351\234\200\350\246\201\345\210\240\351\231\244\345\255\246\347\224\237\344\277\241\346\201\257\347\232\204\344\270\273\351\224\256\347\261\273\345\236\213", nullptr));
        radioButton_num->setText(QApplication::translate("useful_Tool", "\345\255\246\345\217\267", nullptr));
        radioButton_name->setText(QApplication::translate("useful_Tool", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("useful_Tool", "\344\270\273\351\224\256\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("useful_Tool", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class useful_Tool: public Ui_useful_Tool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEFUL_TOOL_H
