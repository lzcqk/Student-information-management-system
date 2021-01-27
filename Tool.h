#ifndef TOOL_H
#define TOOL_H
#include"defin.h"
#include"student.h"
#include<fstream>
#include<iomanip>
#include<qmessagebox.h>
using namespace std;

class Tool
{
public:
    Tool();
    void save_info(student * stu,string File_name,int flag = 1);                // 保存学生资料进二进制文件中，和txt文件  ||||  flag!=1时，同时保存到txt
    student* insert_info(student* stu,student *inner_stu,int index);              // 在某个位置插入同学的具体信息
    student* del_info(student* stu, int study_num);                  // 删除一个同学的全部信息
    student* Find_info(student* stu, int study_num);                 //查找某一同学的信息
    student* sort(student* stu, int sort_type);                            //排列链表

};


#endif // TOOL_H
