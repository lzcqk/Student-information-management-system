/********************************************************************************
** Form generated from reading UI file 'show_stu_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_STU_INFO_H
#define UI_SHOW_STU_INFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_stu_info
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_num;
    QLabel *label_name;
    QLabel *label_score;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *show_stu_info)
    {
        if (show_stu_info->objectName().isEmpty())
            show_stu_info->setObjectName(QString::fromUtf8("show_stu_info"));
        show_stu_info->resize(400, 195);
        show_stu_info->setMinimumSize(QSize(400, 195));
        show_stu_info->setMaximumSize(QSize(400, 195));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        show_stu_info->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(show_stu_info);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_4 = new QWidget(show_stu_info);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget_4);

        widget_3 = new QWidget(show_stu_info);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        widget->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setFont(font1);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_num = new QLabel(widget_2);
        label_num->setObjectName(QString::fromUtf8("label_num"));

        verticalLayout->addWidget(label_num);

        label_name = new QLabel(widget_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        verticalLayout->addWidget(label_name);

        label_score = new QLabel(widget_2);
        label_score->setObjectName(QString::fromUtf8("label_score"));

        verticalLayout->addWidget(label_score);


        horizontalLayout->addWidget(widget_2);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(widget_3);


        retranslateUi(show_stu_info);

        QMetaObject::connectSlotsByName(show_stu_info);
    } // setupUi

    void retranslateUi(QWidget *show_stu_info)
    {
        show_stu_info->setWindowTitle(QApplication::translate("show_stu_info", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_4->setText(QApplication::translate("show_stu_info", "\346\211\200\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("show_stu_info", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("show_stu_info", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("show_stu_info", "\346\210\220\347\273\251\357\274\232", nullptr));
        label_num->setText(QString());
        label_name->setText(QString());
        label_score->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class show_stu_info: public Ui_show_stu_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_STU_INFO_H
