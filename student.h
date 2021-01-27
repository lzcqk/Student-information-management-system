#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<QMessageBox>
using namespace std;

struct show_student_info//先定义一个结构体，便 于读写二进制文件操作
{
    int study_num;                   //学生学号
    char name[20];                       //学生姓名
    int score;                            //学生成绩
};

class student
{
public:
    show_student_info info;
    student* next;                     //下一个学生的信息创建链表
    student();
    ~student();
    student* Read(string path,int flag);        //读取文件构造链表
};

#endif // STUDENT_H
