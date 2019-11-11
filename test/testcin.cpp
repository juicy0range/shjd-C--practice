//
// Created by pan on 2019-11-07.
//

#include<iostream>

using namespace ::std;

/***
 *
 *
 * #include <iostream>
using namespace std;
main ()
{
char a[20];
cin.get(a,20);
cout<<a<<endl;
}
 *
 *
 * *********/

int main() {
    char ch;
    cout << "input:" << endl;

    //cin.get(ch)
//    while (
//            cin.get(ch)) {
//
//
//        cout<<ch<<endl;
//    };
//    cout << ch << endl;

    //cin<<ch
        while (cin>>ch) {
        cout<<ch<<endl;
    };
    cout << ch << endl;

    return 0;
}