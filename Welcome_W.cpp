#include "Welcome_W.h"
#include "ui_Welcome_W.h"
#include"system_MW.h"
#include"regis.h"
#include"defin.h"
#include<qdebug.h>
#include<fstream>
#include<qmessagebox.h>
using namespace std;


Welcome_W::Welcome_W(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::Welcome_W)
{
	ui->setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose);
}

Welcome_W::~Welcome_W()
{
	delete ui;
}

void Welcome_W::keyPressEvent(QKeyEvent* e) 
{
	if (e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter)
	{
		if (ui->lineEdit_name->hasFocus()) ui->lineEdit_password->setFocus();
		else if (ui->lineEdit_password->hasFocus()) on_btn_accept_pressed();
	}
}

void Welcome_W::on_btn_accept_pressed()
{
	if (get_text())
	{
		Welcome_W::~Welcome_W();
		system_MW* W = new system_MW;
		W->show();
	}
	else 
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("用户不存在或密码错误"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	}
}

void Welcome_W::on_btn_close_pressed()
{
	Welcome_W::~Welcome_W();
}

int Welcome_W::get_text()
{
	char inner_name[10];
	char inner_password[10];
	char name[10];
	char password[10];
	int pass_num = 0;
	int i = 0;
	for (i = 0; i < ui->lineEdit_name->text().length(); i++)
	{
		name[i] = ui->lineEdit_name->text()[i].toLatin1();
	}
	name[i] = '\0';
	for (i = 0; i < ui->lineEdit_password->text().length(); i++)
	{
		password[i] = ui->lineEdit_password->text()[i].toLatin1();
	}
	password[i] = '\0';
	ifstream fread("password.dat", ios::binary);
	if (!fread) qDebug() << "未打开文件";
	else
	{
		ifstream output_num("passwor.txt");
		output_num >> pass_num;
		output_num.close();
		for (int i = 0; i < pass_num; i++)
		{
			fread.read(inner_name, 10);      //读用户名
			fread.read(inner_password, 10);     //读密码
			if (strcmp(inner_name, name) == 0 && strcmp(inner_password, password) == 0) 
			{
				QMessageBox::information(NULL, QString::fromLocal8Bit( "提示"), QString::fromLocal8Bit("登陆成功"), QMessageBox::Yes | QMessageBox::No);
				string temp_name = name;
				Glo_name = QString::fromStdString(temp_name);
				return 1;
			}
		}
		fread.close();
	}
	return 0;
}

void Welcome_W::on_register_2_pressed()
{
	if (Window_num == 0)
	{
		regis* reg = new regis;
		reg->show();
		Window_num = 1;
	}
}
