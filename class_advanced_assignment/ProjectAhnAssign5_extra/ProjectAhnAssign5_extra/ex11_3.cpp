#include<iostream>
#include<cstring>
using namespace std;

#include "Book.h"

int main() {
    Book cpp("��ǰ C++", 10000);
    Book java = cpp; // ���� ������ ȣ��� 
    java.set("��ǰ�ڹ�", 12000);
    cpp.show();
    java.show();
}
