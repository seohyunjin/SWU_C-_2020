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
    cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";
    for (int i = 0; i < size; i++) {
        cout << p[i].getName() << "\t";
    }
}

Family::~Family() {
    delete[] p;
}
