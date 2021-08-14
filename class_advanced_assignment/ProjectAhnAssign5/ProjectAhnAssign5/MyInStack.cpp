#include<iostream>
using namespace std;

#include "MyInStack.h"

MyIntStack::MyIntStack() {
    tos = 0; // 생성자에서 변수 초기화
}

bool MyIntStack::push(int n) {
    if (tos > 9)
        return false;
    else {
        p[tos] = n;
        tos++;
        return true;
    }
}

bool MyIntStack::pop(int& n) { // 참조에 의한 호출
    tos--;
    if (tos < 0)
        return false;
    else {
        n = p[tos];
        return true;
    }
}

