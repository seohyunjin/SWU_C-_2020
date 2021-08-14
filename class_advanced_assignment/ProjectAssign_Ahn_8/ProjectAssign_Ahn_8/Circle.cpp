#include <iostream>
using namespace std;

#include "Circle.h"


    Circle::Circle(int radius = 0) {
        this->radius = radius; 
    }

    int  Circle:: getRadius() { 
        return radius; 
    }

    void Circle::setRadius(int radius) {
        this->radius = radius; 
    }

    double  Circle::getArea() { 
        return 3.14 * radius * radius; 
    }
