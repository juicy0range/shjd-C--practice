

//编写程序，使用 whi1 e 循环将 50 到 100 的整数相加。




#include <iostream>

using namespace::std;

int main()
{
    int num=50,result=0;
    while (num!=100)
    {
        result+=num;
        num++;
    }
    cout<<result;

}