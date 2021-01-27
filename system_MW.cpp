#include "system_MW.h"
#include "ui_system_MW.h"
#include<QLabel>
#include<fstream>
#include<QMessageBox>
#include<QDebug>
#include<qevent.h>
using namespace std;

system_MW::system_MW(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::system_MW)
{
	Window_num = 0;
	num_sort = 0;
	first_time = 1;
	btn_sort = 0;
	Sum_stu = new student;
	ui->setupUi(this);
	ui->label_hello->setText(QString::fromLocal8Bit("欢迎您，"));
	ui->label_username->setText(Glo_name);
	connect(ui->actionadd_info, &QAction::triggered, this, &system_MW::simple_add);
	connect(ui->actionearse_info, &QAction::triggered, this, &system_MW::simple_del);
	connect(ui->actionfind, &QAction::triggered, this, &system_MW::simple_Find);
	connect(ui->actionfenduan, &QAction::triggered, this, &system_MW::simple_draw);
	connect(ui->actionbanben, &QAction::triggered, [=]()
		{
			if (Window_num_2 == 0)
			{
				Window_num_2 = 1;
				banben* B_version = new banben;
				B_version->show();
			}
		});
	connect(ui->actionTool_help, &QAction::triggered, [=]()
		{
			if (Window_num_2 == 0)
			{
				Window_num_2 = 1;
				fun_intro* fun_i = new fun_intro;
				fun_i->show();
			}
		});
}

system_MW::~system_MW()
{
	delete(Sum_stu);
	delete ui;
}

void system_MW::show_on()
{
	on_pushButton_clicked();
}

void system_MW::keyPressEvent(QKeyEvent* e) 
{
	if (e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter)
	{
		if (ui->lineEdit->hasFocus()) on_pushButton_clicked();
	}
}

void system_MW::show_on_UI(student* stu, int page_num)
{
	student* temp;                                 //移动指针
	temp = stu;
	int out_num = 1;                        //用于限制移动指针
	int label_num = 1;                     //指向label_num的位置
	int full_label = 0;                       //观察全部label是否被填满
	while (temp != NULL && out_num < (page_num - 1) * 7 + 1)
	{
		temp = temp->next;
		out_num++;
	}
	while (temp != NULL && label_num != 8)
	{
		switch (label_num)
		{
		case 1:
			ui->num1->setText(QString::number(temp->info.study_num));
			ui->name1->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score1->setText(QString::number(temp->info.score));
			break;
		case 2:
			ui->num2->setText(QString::number(temp->info.study_num));
			ui->name2->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score2->setText(QString::number(temp->info.score));
			break;
		case 3:
			ui->num3->setText(QString::number(temp->info.study_num));
			ui->name3->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score3->setText(QString::number(temp->info.score));
			break;
		case 4:
			ui->num4->setText(QString::number(temp->info.study_num));
			ui->name4->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score4->setText(QString::number(temp->info.score));
			break;
		case 5:
			ui->num5->setText(QString::number(temp->info.study_num));
			ui->name5->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score5->setText(QString::number(temp->info.score));
			break;
		case 6:
			ui->num6->setText(QString::number(temp->info.study_num));
			ui->name6->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score6->setText(QString::number(temp->info.score));
			break;
		case 7:
			ui->num7->setText(QString::number(temp->info.study_num));
			ui->name7->setText(QString::fromLocal8Bit(temp->info.name));
			ui->score7->setText(QString::number(temp->info.score));
			full_label = 1;
			break;
		}
		temp = temp->next;
		label_num++;
	}
	if (!full_label)
	{
		switch (label_num)
		{
		case 1:
			ui->num1->setText(" ");
			ui->name1->setText(" ");
			ui->score1->setText(" ");
		case 2:
			ui->num2->setText(" ");
			ui->name2->setText(" ");
			ui->score2->setText(" ");
		case 3:
			ui->num3->setText(" ");
			ui->name3->setText(" ");
			ui->score3->setText(" ");
		case 4:
			ui->num4->setText(" ");
			ui->name4->setText(" ");
			ui->score4->setText(" ");
		case 5:
			ui->num5->setText(" ");
			ui->name5->setText(" ");
			ui->score5->setText(" ");
		case 6:
			ui->num6->setText(" ");
			ui->name6->setText(" ");
			ui->score6->setText(" ");
		case 7:
			ui->num7->setText(" ");
			ui->name7->setText(" ");
			ui->score7->setText(" ");
			break;
		}
	}
	ui->label_now_page->setText(QString::number(page));
	ui->label_Sum_page->setText(QString::number(most_page));
	if (page == most_page)
	{
		ui->But_next->setEnabled(false);
	}
	else
	{
		ui->But_next->setEnabled(true);
	}
	if (page == 1)
	{
		ui->But_per->setEnabled(false);
	}
	else
	{
		ui->But_per->setEnabled(true);
	}
}

void system_MW::simple_add()
{
	if (Window_num == 0 && on_pushButton_clicked() > 0)
	{
		add_new* my_add;
		my_add = new add_new;
		connect(my_add, SIGNAL(success_add()), this, SLOT(show_on()));
		Window_num = 1;
		my_add->show();
		my_add->get_info(Sum_stu, S_path);
	}
}

void system_MW::simple_del()
{
	if (Window_num == 0 && on_pushButton_clicked() > 0)
	{
		del_Find* my_del;
		my_del = new del_Find;
		my_del->setWindowTitle(QString::fromLocal8Bit("删除信息"));
		connect(my_del, SIGNAL(success_del_Find()), this, SLOT(show_on()));
		Window_num = 1;
		my_del->show();
		my_del->set_type(Sum_stu, S_path, 0);
	}
}

void system_MW::simple_Find()
{
	if (Window_num == 0 && on_pushButton_clicked() > 0)
	{
		del_Find* my_Find;
		my_Find = new del_Find;
		my_Find->setWindowTitle(QString::fromLocal8Bit("查询信息"));
		Window_num = 1;
		my_Find->show();
		my_Find->set_type(Sum_stu, S_path, 1);
	}
}

void system_MW::simple_draw() 
{
	if (Window_num == 0 && on_pushButton_clicked() > 0)
	{
		Paint_pic* paint_p = new Paint_pic;
		paint_p->get_data(Sum_stu);
		paint_p->show();
	}
}

int system_MW::on_pushButton_clicked()
{
	btn_sort = 0;
	student inner_stu;
	int index = 0;
	QString biaodian = "%";
	QString path = ui->lineEdit->text();
	S_path = path.toStdString();
	if (path.length() != 0)
	{
		index = S_path.find(".txt");
		if (index >= 0)
		{
			ifstream fread(path.toStdString(), ios::in);
			if (!fread)
			{
				QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("无法打开文件"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
				return 0;
			}
			else
			{
				fread.close();
				Sum_stu = inner_stu.Read(S_path, 1);
				S_path.erase(index, S_path.length());
				ui->label_zongrenshu->setText(QString::number(num_of_stu));
				if (num_of_stu != 0)
				{
					ui->label_pingjun->setText(QString::number(float(num_of_sum) / num_of_stu));
					ui->label_jigelv->setText(QString::number(float(num_of_pass) / num_of_stu * 100) + biaodian);
				}
				else
				{
					ui->label_pingjun->setText(" ");
					ui->label_jigelv->setText(" ");
				}
				ui->label_kemu->setText(QString::fromStdString(S_path));
				show_on_UI(Sum_stu, page);
				Tool hammer;
				hammer.save_info(Sum_stu, S_path);
				return 1;
			}
		}
		else if (S_path.find("_info.dat") >= 0)
		{
			index = S_path.find("_info.dat");
			ifstream fread(path.toStdString(), ios::binary);
			if (!fread)
			{
				QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("无法打开文件"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
				return 0;
			}
			else
			{
				fread.close();
				Sum_stu = inner_stu.Read(S_path, 2);
				S_path.erase(index, S_path.length());
				ui->label_zongrenshu->setText(QString::number(num_of_stu));
				if (num_of_stu != 0)
				{
					ui->label_pingjun->setText(QString::number(float(num_of_sum) / num_of_stu));
					ui->label_jigelv->setText(QString::number(float(num_of_pass) / num_of_stu * 100) + biaodian);
				}
				else
				{
					ui->label_pingjun->setText(" ");
					ui->label_jigelv->setText(" ");
				}
				ui->label_kemu->setText(QString::fromStdString(S_path));
				show_on_UI(Sum_stu, page);
				return 1;
			}
		}
		else
		{
			QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("本系统暂不支持此格式文件"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
			return 0;
		}
	}
	else
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("请输入文件路径"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		return 0;
	}
}

void system_MW::on_But_next_clicked()
{
	QString path = ui->lineEdit->text();
	if (btn_sort || on_pushButton_clicked() > 0)
	{
		ifstream fread(path.toStdString(), ios::in);
		if (!fread)
		{
			QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("无法打开文件"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		}
		else
		{
			fread.close();
			if (first_time) { diff_file = path.toStdString(); first_time = 0; page++; }
			else if (path.toStdString().compare(diff_file))
			{
				page = 1;
				diff_file = path.toStdString();
			}
			else if (page < most_page)page++;
			show_on_UI(Sum_stu, page);
		}
	}
}

void system_MW::on_But_per_clicked()
{
	QString path = ui->lineEdit->text();
	if (btn_sort || on_pushButton_clicked() > 0)
	{
		ifstream fread(path.toStdString(), ios::in);
		if (!fread)
		{
			QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("无法打开文件"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		}
		else
		{
			fread.close();
			if (first_time) { diff_file = path.toStdString(); first_time = 0; page++; }
			else if (path.toStdString().compare(diff_file))
			{
				page = 1;
				diff_file = path.toStdString();
			}
			else if (page > 1)page--;
			show_on_UI(Sum_stu, page);
		}
	}
}

void system_MW::on_radioButton_moren_clicked()
{
	num_sort = 0;
}

void system_MW::on_radioButton_score_up_clicked()   //0 默认  ，1 成绩升序 ，2 成绩降序 ，3 学号升序， 4学号降序
{
	num_sort = 1;
}

void system_MW::on_radioButton_scor_low_clicked()
{
	num_sort = 2;
}

void system_MW::on_radioButton_num_up_clicked()
{
	num_sort = 3;
}

void system_MW::on_radioButton_num_low_clicked()
{
	num_sort = 4;
}

void system_MW::on_pushButton_2_clicked()
{
	if (on_pushButton_clicked() > 0)
	{
		if (num_sort != 0)
		{
			btn_sort = 1;
			Sum_stu = MW_T.sort(Sum_stu, num_sort);
			show_on_UI(Sum_stu, page);
		}
	}
}

void system_MW::on_pushButton_save_clicked()
{
	Tool hammer;
	hammer.save_info(Sum_stu, S_path, 1);
	hammer.save_info(Sum_stu, S_path, 2);
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("保存成功"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}
