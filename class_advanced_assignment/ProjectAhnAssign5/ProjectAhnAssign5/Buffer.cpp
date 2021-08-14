#include<iostream>
#include<string>
using namespace std;

#include "Buffer.h"


Buffer::Buffer(string text) {
    this->text = text; 
}

void Buffer::add(string next) {
    text += next;
} // text에 next 문자열 덧붙이기 

void Buffer::print() { 
    cout << text << endl; 
}