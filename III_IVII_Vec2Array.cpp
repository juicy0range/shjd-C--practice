//
// Created by pan on 2019-11-08.
//

#include  <iostream>
#include <vector>
#include  <ctime>
#include  <cstdlib>


using namespace ::std;


int main() {
    const int sz = 10;

    //------------
    // 1vector
    vector<int> vInt;

    srand((unsigned) time(NULL)); //生成随机种子
    cout << " vector 对象的内容是：" << endl;
    //利用for循环遍历vector 对象的每个元素
    for (int i = 0; i != sz; i++) {
        vInt.push_back(rand() % 100);//生成一个100 以内的随机数
        cout << vInt[1] << " ";
    }
    cout << endl;

    auto it = vInt.cbegin();

    //------------------
    //2Array

    int a[vInt.size()];
    cout << "数组的内容是：" << endl;//利用范围 for 循环遍历数组的每个元素
    for (auto &val: a) {

        val = *it;
        cout<< val <<" ";
        it++;
    }

    cout << endl;
    return 0;
}