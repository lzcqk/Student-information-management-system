#ifndef DEFIN_H_
#define DEFIN_H_
#include<qstring.h>
#include<iostream>
#include"student.h"
using namespace std;

extern char Window_num;
extern char Window_num_2;                  //上面两个量便于记录辅助所用窗口，避免重开
extern QString Glo_name;	               //用户名
extern string diff_file;                   //观察是否文件已经改变
extern int num_of_stu;                     //学生总数
extern int num_of_pass;                    //及格人数
extern int num_of_sum;                    //总分
extern int pass_score;                        //合格分数
extern int max_score;                         //最高分数
extern int page;                                //标记主窗口的当前页数
extern int most_page;                      //计算最大的页数
extern int flag_Tool;                      //观察操作是否成功

#endif // !DEFIN_H_
