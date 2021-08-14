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
        cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.";
    }
};
