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
    Buffer& temp = append(buf, "Guys"); // buf�� ���ڿ��� "Guys" ������ 
    temp.print(); // "HelloGuys" ���
    buf.print(); // "HelloGuys" ���
}
