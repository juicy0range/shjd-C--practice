//
// Created by pan on 2019-11-07.
//



#include  <iostream>

using namespace std; //定义在全局作用域中的数组

string sa[10];
int ia[10];

int main() {

//定义在局部作用域中的教组
    string sa2[10];
    int ia2[10];
    for (auto c : sa)
        cout << c << " ";
    cout << "1"<<endl;

    for (auto c: ia)
        cout << c << " ";
    cout << "2"<<endl;

    for (auto c: sa2)
        cout << c << " ";
    cout << "3"<<endl;

    for (auto c: ia2)
        cout << c << " ";
    cout << "4"<<endl;

    return 0;
}