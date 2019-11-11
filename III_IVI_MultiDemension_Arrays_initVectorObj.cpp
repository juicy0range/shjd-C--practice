//
// Created by pan on 2019-11-08.
//

/**
 * 练习 341: 编写一段程序，用整型数组初始化一个 vector 对象
 *
 * ——>Array(defined)—>vector
 * */

#include  <iostream>
#include  <vector>
#include  <ctime>
#include  <cstdlib>

using namespace ::std;

int main() {
    const int sz = 10; //常量 sz 作为数组的维度


    //------------------
    //1define array
    int a[sz];

    srand((unsigned) time(NULL)); //生成随机数种子

    cout << "array：" << endl;

//利用范固 for 循环遍历数组的每个元素

    for (auto &val :a) {
        val = rand() % 100;
        cout << val << " ";
    }

    cout << endl << "vector:" << endl;

    //2to vector

    vector<int> vInt(begin(a), end(a));

    for (int i = 0; i < 10; i++)
        cout << vInt[i] << "  ";

    cout << endl;
}