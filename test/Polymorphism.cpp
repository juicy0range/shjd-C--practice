//
// Created by pan on 2019-11-09.
//

#include<iostream>

using namespace std;

class A {
public:
    void foo() {
        printf("1\n");
    }

    virtual void virtual_method() {
        printf("2\n");
    }
};

class B : public A {
public:
    void foo() {
        printf("3\n");
    }

    void virtual_method() {
        printf("4\n");
    }
};

int main(void) {
    A a;
    B b;
    A *p = &a;
    p->foo();
    p->virtual_method();
    p = &b;
    p->foo();
    p->virtual_method();
    return 0;
}