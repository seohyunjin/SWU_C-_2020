#include<iostream>
using namespace std;

#include "MyInStack.h"

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�. 
        if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ���� 
        else cout << endl << i + 1 << " ��° stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�. 
        if (a.pop(n)) cout << n << ' '; // �� �� �� ��� 
        else cout << endl << i + 1 << " ��° stack empty";
    }
    cout << endl;
}

