#include <iostream>
using namespace std;

#include "Circle.h"

void swap(Circle& a, Circle& b) {
    int swap;
    swap = a.getNum();
    a.setNum(b.getNum());
    b.setNum(swap);
}

int main() {
    Circle a(5), b(10);
    cout << a.getNum() << " " << b.getNum() << endl;
    swap(a, b);
    cout << a.getNum() << " " << b.getNum();
}
