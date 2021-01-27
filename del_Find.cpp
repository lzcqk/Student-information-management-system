#include "del_Find.h"
#include "ui_del_Find.h"

del_Find::del_Find(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::del_Find)
{
	ui->setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose, true);
}

del_Find::~del_Find()
{
	Window_num = 0;
	delete ui;
}

void del_Find::keyPressEvent(QKeyEvent* e)
{
	if (e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter)
	{
		if (ui->lineEdit->hasFocus()) on_pushButton_clicked();
	}
}

void del_Find::set_type(student* stu, string File_name, int _type)      //0为删除，1为寻找
{
	if (_type == 0)
	{
		ui->label_title->setText("请输入要删除的学生的学号");
	}
	else
	{
		ui->label_title->setText("请输入要查找的学生的学号");
	}
	in_stu = stu;
	in_file_name = File_name;
	ui_type = _type;
}

void del_Find::on_pushButton_clicked()
{
	int stu_num;
	stu_num = ui->lineEdit->text().toInt();
	if (ui_type == 0)              //删除操作
	{
		in_stu = del_Find_T.del_info(in_stu, stu_num);
		if (flag_Tool == 1)
		{
			flag_Tool = 0;
			del_Find_T.save_info(in_stu, in_file_name, 0);
			emit success_del_Find();
			del_Find::~del_Find();
		}
	}
	else
	{
		student* find_temp;
		find_temp =  del_Find_T.Find_info(in_stu, stu_num);
		if (flag_Tool == 1)
		{
			flag_Tool = 0;
			show_stu_info* s_info = new show_stu_info;
			s_info->set_label(find_temp);
			s_info->show();
		}
	}
}
