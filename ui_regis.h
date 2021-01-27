/********************************************************************************
** Form generated from reading UI file 'regis.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIS_H
#define UI_REGIS_H

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

class Ui_regis
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_name;
    QLabel *label_password;
    QLabel *label_password_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_password_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *label_service;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_close;
    QPushButton *btn_accept;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName(QString::fromUtf8("regis"));
        regis->setEnabled(true);
        regis->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(regis->sizePolicy().hasHeightForWidth());
        regis->setSizePolicy(sizePolicy);
        regis->setMinimumSize(QSize(400, 300));
        regis->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/my_app_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        regis->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(regis);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_4 = new QWidget(regis);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        widget_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_name = new QLabel(widget_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setFont(font);

        verticalLayout_2->addWidget(label_name);

        label_password = new QLabel(widget_2);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font);

        verticalLayout_2->addWidget(label_password);

        label_password_2 = new QLabel(widget_2);
        label_password_2->setObjectName(QString::fromUtf8("label_password_2"));

        verticalLayout_2->addWidget(label_password_2);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_name = new QLineEdit(widget_3);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Unicode MS"));
        lineEdit_name->setFont(font1);
        lineEdit_name->setMaxLength(8);

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_password = new QLineEdit(widget_3);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setFont(font1);
        lineEdit_password->setMaxLength(9);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_password_2 = new QLineEdit(widget_3);
        lineEdit_password_2->setObjectName(QString::fromUtf8("lineEdit_password_2"));
        lineEdit_password_2->setFont(font1);
        lineEdit_password_2->setMaxLength(9);
        lineEdit_password_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password_2);


        horizontalLayout_2->addWidget(widget_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_5->addWidget(widget_4);

        widget_6 = new QWidget(regis);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        label_service = new QLabel(widget_6);
        label_service->setObjectName(QString::fromUtf8("label_service"));
        sizePolicy.setHeightForWidth(label_service->sizePolicy().hasHeightForWidth());
        label_service->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(38, 9, 200, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush8(QColor(212, 127, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(0, 0, 0, 85));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        label_service->setPalette(palette);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font2.setUnderline(true);
        label_service->setFont(font2);

        horizontalLayout_3->addWidget(label_service);


        verticalLayout_5->addWidget(widget_6);

        widget = new QWidget(regis);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_close = new QPushButton(widget);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setFont(font);

        horizontalLayout->addWidget(btn_close);

        btn_accept = new QPushButton(widget);
        btn_accept->setObjectName(QString::fromUtf8("btn_accept"));
        btn_accept->setFont(font);

        horizontalLayout->addWidget(btn_accept);


        verticalLayout_5->addWidget(widget);

        widget_5 = new QWidget(regis);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(label);


        verticalLayout_5->addWidget(widget_5);


        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QApplication::translate("regis", "\346\263\250\345\206\214\344\277\241\346\201\257", nullptr));
        label_name->setText(QApplication::translate("regis", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_password->setText(QApplication::translate("regis", "\345\257\206    \347\240\201\357\274\232", nullptr));
        label_password_2->setText(QApplication::translate("regis", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit_name->setPlaceholderText(QApplication::translate("regis", "        \351\225\277\345\272\246<=8", nullptr));
        lineEdit_password->setPlaceholderText(QApplication::translate("regis", "     6<=\351\225\277\345\272\246<=9", nullptr));
        lineEdit_password_2->setText(QString());
        lineEdit_password_2->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("regis", "\346\263\250\345\206\214\345\215\263\344\273\243\350\241\250\351\230\205\350\257\273\345\271\266\345\220\214\346\204\217", nullptr));
        label_service->setText(QApplication::translate("regis", "\343\200\212\346\234\215\345\212\241\345\215\217\350\256\256\345\222\214\351\232\220\347\247\201\346\224\277\347\255\226\343\200\213", nullptr));
        btn_close->setText(QApplication::translate("regis", "\345\217\226\346\266\210", nullptr));
        btn_accept->setText(QApplication::translate("regis", "\347\241\256\350\256\244", nullptr));
        label->setText(QApplication::translate("regis", "*\350\213\245\345\267\262\346\234\211\350\264\246\345\217\267\357\274\214\346\227\240\351\234\200\345\206\215\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
