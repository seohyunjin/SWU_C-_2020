#include<iostream>
using namespace std;

#include "Circle.h"

Circle::Circle(int r) {
    radius = r;
}

int Circle::getRadius() {
    return radius;
}

void Circle::setRadius(int r) {
    radius = r; 
}

void Circle::show() { 
    cout << "�������� " << radius << "�� ��" << endl; 
}
