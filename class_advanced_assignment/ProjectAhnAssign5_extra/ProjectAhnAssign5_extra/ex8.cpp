#include<iostream>
#include<cstring>
using namespace std;

#include "MyInStack.h"

int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a; // ���� ���� 
    b.push(30);

    int n;
    a.pop(n); // ���� a �� 
    cout << "���� a���� ���� �� " << n << endl;
    b.pop(n); // ���� b �� 
    cout << "���� b���� ���� �� " << n << endl;
}
