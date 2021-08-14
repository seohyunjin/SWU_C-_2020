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
    cout << "반지름이 " << radius << "인 원" << endl; 
}
