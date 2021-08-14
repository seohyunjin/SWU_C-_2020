#include<iostream>
#include<cstring>
using namespace std;

#include "MyInStack.h"

MyIntStack::MyIntStack() {} //»ý¼ºÀÚ ÀÌ ºÎºÐÀº ¾È½áÁàµµ ±¦ÂúÀ½ 


MyIntStack::MyIntStack(int size) {
    this->size = size;
    p = new int[size];
    tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack& s) {
    this->p = new int[s.size];
    this->size = s.size;
    this->tos = s.tos;
    for (int i = 0; i <= s.tos; i++)
        this->p[i] = s.p[i];
}

bool MyIntStack::push(int n) {
    if (tos > size)
        return false;
    else {
        p[tos++] = n;
        return true;
    }
}

bool MyIntStack::pop(int& n) {
    if (tos < 0)
        return false;
    else {
        n = p[--tos];
        return true;
    }
}

MyIntStack::~MyIntStack() {
    delete[] p;
    p = NULL;
}
