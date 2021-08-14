#pragma once

class Circle {
    int radius;
public:
    Circle(int radius = 0) {}
    int getRadius() { }
    void setRadius(int radius) {  }
    double getArea() {}
};

//파생클래스 생성

class NameCircle : public Circle {
    string name;
public:
    NameCircle(int radius, string name) {
        setRadius(radius);
        this->name = name;
    }
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << this->name;
    }
};