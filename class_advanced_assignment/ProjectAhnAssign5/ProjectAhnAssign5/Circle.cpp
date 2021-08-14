#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle(int num) {
    this->num = num; 
}

void Circle::setNum(int num) { 
    this->num = num; 
}

int Circle::getNum() {
    return num; 
}