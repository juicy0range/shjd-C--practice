//
// Created by pan on 2019-11-07.
//


/*
 * 练习 1.10: 除了运算符将运算对象的值增加 1 以外，还有一个递减运算符（实现将值减少 1。编写程序，
 *
 *
 *
 *
 * 使用递臧运算符在循环中按递减序打印出 10 到 0 之间的整数。

【出题思路】

递减循环较之递增循环用得较少，应有意进行这方面的练习，对提高编程能力

是有益的。
 *
 *
 * **/
#include <iostream>

using namespace ::std;

int main() {

    int last = 11;
    while (last-- != 0)
        cout << last << endl;

    return 0;
}