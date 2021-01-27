/********************************************************************************
** Form generated from reading UI file 'Welcome_W.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_W_H
#define UI_WELCOME_W_H

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

class Ui_Welcome_W
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_name;
    QLabel *label_password;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_close;
    QPushButton *btn_accept;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *register_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Welcome_W)
    {
        if (Welcome_W->objectName().isEmpty())
            Welcome_W->setObjectName(QString::fromUtf8("Welcome_W"));
        Welcome_W->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Welcome_W->sizePolicy().hasHeightForWidth());
        Welcome_W->setSizePolicy(sizePolicy);
        Welcome_W->setMinimumSize(QSize(800, 500));
        Welcome_W->setMaximumSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Welcome_W->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(Welcome_W);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        widget = new QWidget(Welcome_W);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        widget_4 = new QWidget(Welcome_W);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font1.setBold(true);
        font1.setWeight(75);
        widget_2->setFont(font1);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_name = new QLabel(widget_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_name->setFont(font2);

        verticalLayout->addWidget(label_name);

        label_password = new QLabel(widget_2);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_password->setFont(font3);

        verticalLayout->addWidget(label_password);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_name = new QLineEdit(widget_3);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial Unicode MS"));
        lineEdit_name->setFont(font4);
        lineEdit_name->setMaxLength(8);

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_password = new QLineEdit(widget_3);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial Unicode MS"));
        font5.setBold(true);
        font5.setWeight(75);
        lineEdit_password->setFont(font5);
        lineEdit_password->setMaxLength(12);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_password);


        horizontalLayout_2->addWidget(widget_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(Welcome_W);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_close = new QPushButton(widget_5);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        btn_close->setFont(font6);

        horizontalLayout_3->addWidget(btn_close);

        btn_accept = new QPushButton(widget_5);
        btn_accept->setObjectName(QString::fromUtf8("btn_accept"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font7.setPointSize(9);
        font7.setBold(false);
        font7.setWeight(50);
        btn_accept->setFont(font7);

        horizontalLayout_3->addWidget(btn_accept);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(Welcome_W);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        register_2 = new QPushButton(widget_6);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setFont(font7);

        horizontalLayout_4->addWidget(register_2);


        verticalLayout_3->addWidget(widget_6);

        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(Welcome_W);

        QMetaObject::connectSlotsByName(Welcome_W);
    } // setupUi

    void retranslateUi(QWidget *Welcome_W)
    {
        Welcome_W->setWindowTitle(QApplication::translate("Welcome_W", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("Welcome_W", "\346\254\242\350\277\216\350\277\233\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_name->setText(QApplication::translate("Welcome_W", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_password->setText(QApplication::translate("Welcome_W", "\345\257\206    \347\240\201\357\274\232", nullptr));
        lineEdit_password->setText(QString());
        btn_close->setText(QApplication::translate("Welcome_W", "\345\205\263\351\227\255", nullptr));
        btn_accept->setText(QApplication::translate("Welcome_W", "\347\241\256\350\256\244", nullptr));
        register_2->setText(QApplication::translate("Welcome_W", "\345\216\273\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome_W: public Ui_Welcome_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_W_H
