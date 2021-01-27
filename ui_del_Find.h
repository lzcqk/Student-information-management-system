/********************************************************************************
** Form generated from reading UI file 'del_Find.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_FIND_H
#define UI_DEL_FIND_H

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

class Ui_del_Find
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_xxx;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *del_Find)
    {
        if (del_Find->objectName().isEmpty())
            del_Find->setObjectName(QString::fromUtf8("del_Find"));
        del_Find->resize(400, 175);
        del_Find->setMinimumSize(QSize(400, 175));
        del_Find->setMaximumSize(QSize(400, 175));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        del_Find->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(del_Find);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(del_Find);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_title = new QLabel(widget_2);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);

        horizontalLayout_2->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(del_Find);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_xxx = new QLabel(widget);
        label_xxx->setObjectName(QString::fromUtf8("label_xxx"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        label_xxx->setFont(font1);

        horizontalLayout->addWidget(label_xxx);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Unicode MS"));
        lineEdit->setFont(font2);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(del_Find);

        QMetaObject::connectSlotsByName(del_Find);
    } // setupUi

    void retranslateUi(QWidget *del_Find)
    {
        del_Find->setWindowTitle(QApplication::translate("del_Find", "Form", nullptr));
        label_title->setText(QString());
        label_xxx->setText(QApplication::translate("del_Find", "\345\255\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("del_Find", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class del_Find: public Ui_del_Find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_FIND_H
