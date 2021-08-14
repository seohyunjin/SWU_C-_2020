#include <iostream>
using namespace std;

#include "Point.h"


Point::Point(int x, int y) {  this->x = x; this->y = y;  }

int Point::getX() { return x;  }

int Point::getY() {  return y;  }

void Point::move(int x, int y) { this->x = x; this->y = y; }



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
