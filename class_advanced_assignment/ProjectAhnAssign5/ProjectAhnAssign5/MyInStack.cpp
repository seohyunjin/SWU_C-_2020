#include<iostream>
using namespace std;

#include "MyInStack.h"

MyIntStack::MyIntStack() {
    tos = 0; // �����ڿ��� ���� �ʱ�ȭ
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

bool MyIntStack::pop(int& n) { // ������ ���� ȣ��
    tos--;
    if (tos < 0)
        return false;
    else {
        n = p[tos];
        return true;
    }
}

