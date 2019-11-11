//
// Created by pan on 2019-11-07.
//

/**
*练习 5.9: 编写一段程序，使用一系列 f 语句统计从 cin 读入的文本中有多少元音字母

【出题思路】

if 语句和 switch 语句是分支语句的两种形式，一般来说可以互相转化。
*
 *
 *
 *
 *
**/

#include <iostream>

using namespace ::std;


/**
 *
 * cin: words(eng )
 *
 * judge: aeiou
 *
 * out:counts
 *
 * **/

int main() {

    int counts = 0;
    int all=0;
    char ch;


    cout << "inut words:" << endl;

    while (cin >> ch) {
        all++;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            counts++;

        if(all>10)
            break;
    }

    cout << counts;
    return 0;
}