#include "regis.h"
#include "ui_regis.h"
#include"defin.h"
#include"Service.h"
#include<QDebug>
#include<fstream>
#include<iostream>
#include<qmessagebox.h>
using namespace std;

regis::regis(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::regis)
{
	ui->setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose, true);
	ui->label_service->installEventFilter(this);
}

regis::~regis()
{
	Window_num = 0;
	delete ui;
}

void regis::keyPressEvent(QKeyEvent* e) 
{
	if (e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter)
	{
		if (ui->lineEdit_name->hasFocus()) ui->lineEdit_password->setFocus();
		else if (ui->lineEdit_password->hasFocus()) ui->lineEdit_password_2->setFocus();
		else if (ui->lineEdit_password_2->hasFocus()) on_btn_accept_clicked();
	}
}

bool regis::eventFilter(QObject* watched, QEvent* event)
{
	if (watched == ui->label_service)
	{
		if (event->type() == QEvent::MouseButtonPress)  //显示同意协议
		{
			if (Window_num_2 == 0)
			{
				Window_num_2 = 1;
				Service* ser = new Service;
				ser->show();
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return QWidget::eventFilter(watched, event);
	}
}

int regis::read_dat(char name[])   //读取二进制文件中的用户名和密码
{
	char inner_name[10];
	int pass_num = 0;
	ifstream fread("password.dat", ios::binary|ios::out);
	if (!fread) qDebug() << "未打开文件";
	else
	{
		ifstream output_num("passwor.txt");
		output_num >> pass_num;
		output_num.close();
		for (int i = 0; i < pass_num; i++)
		{
			fread.read(inner_name, 10);    //读用户名
			qDebug() << inner_name;
			if (strcmp(inner_name, name) == 0) return 0;
			fread.read(inner_name, 10);   //读密码
		}
		fread.close();
	}
	return 1;
}

int regis::get_User_info()  //获得输入框中的用户名和密码
{
	if (ui->lineEdit_password->text() == ui->lineEdit_password_2->text() && ui->lineEdit_password->text().length() >= 6 )
	{
		char reg_name[10];
		char reg_password[10];
		int pass_num = 0;
		int i = 0;
		for (i = 0; i < ui->lineEdit_name->text().length(); i++)
		{
			reg_name[i] = ui->lineEdit_name->text()[i].toLatin1();
		}
		reg_name[i] = '\0';
		for (i = 0; i < ui->lineEdit_password->text().length(); i++)
		{
			reg_password[i] = ui->lineEdit_password->text()[i].toLatin1();
		}
		reg_password[i] = '\0';
		ofstream fout("password.dat", ios::binary | ios::app);
		if (!fout) qDebug() << "未打开文件";
		else
		{
			if (read_dat(reg_name))
			{
				fout.write(reg_name, 10);
				fout.write(reg_password, 10);
				ifstream output_num("passwor.txt");
				output_num >> pass_num;
				output_num.close();
				pass_num++;
				ofstream input_num("passwor.txt");
				input_num << pass_num;
				input_num.close();
				QMessageBox::information(NULL, "提示", "用户创建成功", QMessageBox::Yes | QMessageBox::No);
				regis::~regis();
			}
			else
			{
				QMessageBox::warning(NULL, "警告", "用户名已存在", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
			}
			fout.close();
			return 1;
		}
	}
	else  if (ui->lineEdit_password->text().length() < 6)
	{
		QMessageBox::critical(NULL, "警告", "密码过短", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	}
	else
	{
		QMessageBox::critical(NULL, "警告", "两个密码不同", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	}
	return 0;
}

void regis::on_btn_accept_clicked()
{
	get_User_info();
}

void regis::on_btn_close_clicked()
{
	regis::~regis();
}
