#include<iostream>
#include<string>
using namespace std;

#include "Buffer.h"


Buffer::Buffer(string text) {
    this->text = text; 
}

void Buffer::add(string next) {
    text += next;
} // text�� next ���ڿ� �����̱� 

void Buffer::print() { 
    cout << text << endl; 
}