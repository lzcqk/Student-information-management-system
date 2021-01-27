#include "student.h"
#include"defin.h"
#include<fstream>
using namespace std;

student::student()
{
    info.study_num = 0;
    info.score = 0;
}

student::~student()
{

}

student* student::Read(string path,int flag)
{
    student* head, * temp, * tail;
    head = temp = tail = new student;
    if (flag == 1)                       //��ȡ�ļ�Ϊtxt��ʽ
    {
        ifstream fread(path, ios::in);                                   //ÿ�ζ�ȡ�ļ���Ҫ��ѧ����������ˢ��
        num_of_stu = 0;
        num_of_pass = 0;
        num_of_sum = 0;
        fread >> temp->info.study_num >> temp->info.name >> temp->info.score;
        if (temp->info.score >= pass_score) num_of_pass++;
        num_of_sum += temp->info.score;
        num_of_stu++;
        while (temp->info.study_num != 0)
        {
            tail->next = temp;
            tail = temp;
            temp = new student;
            fread >> temp->info.study_num >> temp->info.name >> temp->info.score;
            if (temp->info.score >= pass_score) num_of_pass++;
            if(temp->info.score > max_score || temp->info.score < 0)
            {
                num_of_stu = 0;
                num_of_pass = 0;
                num_of_sum = 0;
                head = NULL;
                QMessageBox::critical(NULL, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("�ļ���ѧ�����������ɴ����������"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
                break;
            }
            else
            {
                num_of_sum += temp->info.score;
                num_of_stu++;
            }
        }
        tail->next = NULL;
        fread.close();
    }
    else if (flag == 2)               //��ȡ��ʽΪ�������ļ���ʽ  dat
    {
        ifstream fread(path, ios::binary|ios::out);                                   //ÿ�ζ�ȡ�ļ���Ҫ��ѧ����������ˢ��
        num_of_stu = 0;
        num_of_pass = 0;
        num_of_sum = 0;
        fread.read((char*)&(temp->info), sizeof(temp->info));
        if (temp->info.score >= pass_score) num_of_pass++;
        num_of_sum += temp->info.score;
        num_of_stu++;
        while (temp->info.study_num != 0)
        {
            tail->next = temp;
            tail = temp;
            temp = new student;
            fread.read((char*)&(temp->info), sizeof(temp->info));
            if (temp->info.score >= pass_score) num_of_pass++;
            if(temp->info.score > max_score || temp->info.score < 0)
            {
                num_of_stu = 0;
                num_of_pass = 0;
                num_of_sum = 0;
                head = NULL;
                QMessageBox::critical(NULL, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("�ļ���ѧ�����������ɴ����������"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
                break;
            }
            else
            {
                num_of_sum += temp->info.score;
                num_of_stu++;
            }
        }
        tail->next = NULL;
        fread.close();
    }
    if(num_of_stu != 0)num_of_stu--;                                                       //���һ���հ׵�ѧ����Ϣ������Ҫɾ��
    if ((num_of_stu % 7) == 0) { most_page = (num_of_stu / 7) ; }
    else { most_page = (num_of_stu / 7)+1; }
    return head;
}

/*
student* student::operator++(int) 
{
    student* temp = this;
    while (temp!= NULL)
    {
        num_of_sum += temp->info.score;
        temp = temp->next;
    }
    return this;
}
*/