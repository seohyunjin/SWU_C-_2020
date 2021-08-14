#include<iostream>
#include<string>
using namespace std;

#include "Buffer.h"

Buffer& append(Buffer& s, string g) {
    s.add(g);
    return s;
}

int main() {
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys"); // buf의 문자열에 "Guys" 덧붙임 
    temp.print(); // "HelloGuys" 출력
    buf.print(); // "HelloGuys" 출력
}
