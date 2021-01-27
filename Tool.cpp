#include "Tool.h"
#include<iostream>
#include<qdebug.h>
using namespace std;

Tool::Tool()
{
	cout << "创建一个工具类" << endl;
}

void Tool::save_info(student *stu,string File_name,int flag)          //保存二进制文件，同时保存txt文件
{
	student *temp;                                 //定义一个student指针temp，用于将来的指针移动
	temp = stu;
	string F_name = File_name + "_info.dat";
	ofstream writer(F_name, ios::binary);                           // 定义一个二进制文件存放数据 ，便于读取
    ofstream oFile(File_name+".csv", ios::out | ios::trunc);                  // 将各个成绩输出在csv中，像excel一样的类型便于查看
    oFile << "学号" << "," << "姓名" << "," << "成绩" << endl;
	while ( temp!= NULL)
	{
		writer.write((char*)&(temp->info), sizeof(temp->info));
        oFile<<temp->info.study_num<<","<<temp->info.name<<","<<temp->info.score<<endl;
		temp = temp->next;
	}
	writer.close();
    oFile.close();
	if (flag != 1)
	{
		temp = stu;
		ofstream txtwriter((File_name+".txt"), ios::out);
		while (temp!= NULL)
		{
			txtwriter << setw(10) << temp->info.study_num << setw(10) << temp->info.name << setw(10) << temp->info.score;
			temp = temp->next;
		}
		txtwriter.close();
	}

}

student* Tool::insert_info(student* stu,student *inner_stu,int index)
{
	if ((index > 0 && index <= num_of_stu) || (index == 1&&num_of_stu == 0))
	{
		int  i = 1;
		student* temp = stu;
		while(temp != NULL) 
		{
			if (temp->info.study_num == inner_stu->info.study_num)
			{
				QMessageBox::critical(NULL,QString::fromLocal8Bit("警告"),QString::fromUtf16(u"此学号已存在"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
				return stu;
			}
			temp = temp->next;
		}
		temp = stu;
		if (index == 1) 
		{
			inner_stu->next = stu;
			stu = inner_stu;
		}
		else
		{
			for (; i < index - 1; i++)
			{
				if (temp->next != NULL) temp = temp->next;               //指针移动
			}
			inner_stu->next = temp->next;                               //插入
			temp->next = inner_stu;
		}
		flag_Tool = 1;            //插入成功
		return stu;
	}
	else 
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"),QString::fromLocal8Bit( "此次无法插入信息"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		return stu;
	}
}

student* Tool::del_info(student* stu, int study_num)
{
	student* header = new student;
	header->next = stu;
	student* temp = stu;
	student* per = header;
	while (temp != NULL)
	{
		if (temp->info.study_num == study_num)break;
		else
		{
			temp = temp->next;
			per = per->next;
		}
	}
	if (temp != NULL)           //找到了相同学号的学生
	{
		per->next = temp->next;
		QMessageBox::information(NULL,QString::fromLocal8Bit( "提示"), QString::fromLocal8Bit("信息删除成功"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		stu = header->next;
		flag_Tool = 1;            //删除成功
		delete temp;
		return stu;
	}
	else
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("该同学不存在"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		return stu;
	}
}

student* Tool::Find_info(student* stu, int study_num)
{
	student* temp = stu;
	while (temp != NULL)
	{
		if (temp->info.study_num == study_num)break;
		else
		{
			temp = temp->next;
		}
	}
	if (temp != NULL)           //找到了相同学号的学生
	{
		//QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("信息查找成功"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		flag_Tool = 1;            //查询成功
		return temp;
	}
	else
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("警告"), QString::fromLocal8Bit("该同学不存在"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		return stu;
	}
}

student* Tool::sort(student* stu, int sort_type) 
{
	student* p;	student* p2; student* p3;
	student* temp = new student;
	if (sort_type == 1)
	{
		for (p = stu; p->next != NULL; p = p->next)       //选择排序法 //0 默认  ，1 成绩升序 ，2 成绩降序 ，3 学号升序， 4学号降序
		{
			p2 = p;
			for (p3 = p->next; p3 != NULL; p3 = p3->next)
			{
				if (p3->info.score < p2->info.score) p2 = p3;
			}
			if (p2 != p)
			{
				temp->info = p2->info;
				p2->info = p->info;
				p->info = temp->info;
			}
		}
	}
	else if (sort_type == 2)
	{
		for (p = stu; p->next != NULL; p = p->next)
		{
			p2 = p;
			for (p3 = p->next; p3 != NULL; p3 = p3->next)
			{
				if (p3->info.score > p2->info.score) p2 = p3;
			}
			if (p2 != p)
			{
				temp->info = p2->info;
				p2->info = p->info;
				p->info = temp->info;
			}
		}
	}
	else if (sort_type == 3)
	{
		for (p = stu; p->next != NULL; p = p->next)
		{
			p2 = p;
			for (p3 = p->next; p3 != NULL; p3 = p3->next)
			{
				if (p3->info.study_num < p2->info.study_num) p2 = p3;
			}
			if (p2 != p)
			{
				temp->info = p2->info;
				p2->info = p->info;
				p->info = temp->info;
			}
		}
	}
	else if (sort_type == 4)
	{
		for (p = stu; p->next != NULL; p = p->next)
		{
			p2 = p;
			for (p3 = p->next; p3 != NULL; p3 = p3->next)
			{
				if (p3->info.study_num > p2->info.study_num) p2 = p3;
			}
			if (p2 != p)
			{
				temp->info = p2->info;
				p2->info = p->info;
				p->info = temp->info;
			}
		}
	}
	delete temp;
	return stu;
}
