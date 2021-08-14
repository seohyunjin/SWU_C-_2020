#pragma once

#include"Point.h"
#include <string>

class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x, int y, string color) {
        Point(x, y);
        this->color = color;
    }
    void setPoint(int x, int y) {
        move(x, y);
    }
    void setColor(string color) {
        this->color = color;
    }
    void show() {
        cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�.";
    }
};
