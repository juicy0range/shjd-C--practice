//
// Created by pan on 2019-11-07.
//

#include <iostream>
/*
 *练习 5.5: 写一段自己的程序，使语句实现把数字成绩转换成字母成绩的要求。

【出题思路】

练习 if-ese 语句的基本语法结构。
 * */

using namespace::std;



/**
 *
 * input :99/100
 *
 * judge:A/ B/  C/  D
 *      9x+/  8x+  / 7x+  /...
 *
 *
 * **/

int main()
{
    int score=0;
    cout<<"please put your score:"<<endl;
    cin>>score;

    if(score>100 || score<0)
    {
        cout<<"invaild!"<<endl;
        return 0;
    }

    if(score>=90)
    {
        cout<<"A"<<endl;
    }
    else if( score >=80)
    {
        cout<<"B"<<endl;

    }
    else if( score >=70)
    {
        cout<<"C"<<endl;
    }
    else{
        cout<<"D"<<endl;

    }




    return 0;
}