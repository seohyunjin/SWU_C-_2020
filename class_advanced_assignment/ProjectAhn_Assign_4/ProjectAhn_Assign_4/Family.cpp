#include <iostream>
#include <string>
using namespace std;

# include "Family.h"

Family::Family(string name, int size) {
    p = new Person[size];
    this->size = size;
    this->name = name;
}

void Family::setName(int num, string name) {
    p[num].setName(name);
}

void Family::show() {
    cout << name << "������ ������ ���� " << size << "�� �Դϴ�.\n";
    for (int i = 0; i < size; i++) {
        cout << p[i].getName() << "\t";
    }
}

Family::~Family() {
    delete[] p;
}
