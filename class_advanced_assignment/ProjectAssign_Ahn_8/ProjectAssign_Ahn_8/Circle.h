#pragma once

class Circle {
    int radius;
public:
    Circle(int radius = 0) {}
    int getRadius() { }
    void setRadius(int radius) {  }
    double getArea() {}
};

//�Ļ�Ŭ���� ����

class NameCircle : public Circle {
    string name;
public:
    NameCircle(int radius, string name) {
        setRadius(radius);
        this->name = name;
    }
    void show() {
        cout << "�������� " << getRadius() << "�� " << this->name;
    }
};