#include "Tool.h"
#include<iostream>
#include<qdebug.h>
using namespace std;

Tool::Tool()
{
	cout << "����һ��������" << endl;
}

void Tool::save_info(student *stu,string File_name,int flag)          //����������ļ���ͬʱ����txt�ļ�
{
	student *temp;                                 //����һ��studentָ��temp�����ڽ�����ָ���ƶ�
	temp = stu;
	string F_name = File_name + "_info.dat";
	ofstream writer(F_name, ios::binary);                           // ����һ���������ļ�������� �����ڶ�ȡ
    ofstream oFile(File_name+".csv", ios::out | ios::trunc);                  // �������ɼ������csv�У���excelһ�������ͱ��ڲ鿴
    oFile << "ѧ��" << "," << "����" << "," << "�ɼ�" << endl;
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
				QMessageBox::critical(NULL,QString::fromLocal8Bit("����"),QString::fromUtf16(u"��ѧ���Ѵ���"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
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
				if (temp->next != NULL) temp = temp->next;               //ָ���ƶ�
			}
			inner_stu->next = temp->next;                               //����
			temp->next = inner_stu;
		}
		flag_Tool = 1;            //����ɹ�
		return stu;
	}
	else 
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("����"),QString::fromLocal8Bit( "�˴��޷�������Ϣ"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
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
	if (temp != NULL)           //�ҵ�����ͬѧ�ŵ�ѧ��
	{
		per->next = temp->next;
		QMessageBox::information(NULL,QString::fromLocal8Bit( "��ʾ"), QString::fromLocal8Bit("��Ϣɾ���ɹ�"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		stu = header->next;
		flag_Tool = 1;            //ɾ���ɹ�
		delete temp;
		return stu;
	}
	else
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("��ͬѧ������"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
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
	if (temp != NULL)           //�ҵ�����ͬѧ�ŵ�ѧ��
	{
		//QMessageBox::information(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("��Ϣ���ҳɹ�"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		flag_Tool = 1;            //��ѯ�ɹ�
		return temp;
	}
	else
	{
		QMessageBox::critical(NULL, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("��ͬѧ������"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
		return stu;
	}
}

student* Tool::sort(student* stu, int sort_type) 
{
	student* p;	student* p2; student* p3;
	student* temp = new student;
	if (sort_type == 1)
	{
		for (p = stu; p->next != NULL; p = p->next)       //ѡ������ //0 Ĭ��  ��1 �ɼ����� ��2 �ɼ����� ��3 ѧ������ 4ѧ�Ž���
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
