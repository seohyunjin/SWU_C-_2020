#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point() { this->x = 0; this->y = 0; } // 기본생성자 생성해야만 오류 안뜨더라,.. 기본값도 넣어주어야함
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x = 0, int y = 0, string color = "BLACK") { // black색에 (0,0)위치의 점
        Point(x, y);
        this->color = color;
    } // 생성
    void setPoint(int x, int y) {
        move(x, y);  //점의 위치 변경
    }
    void setColor(string color) {
        this->color = color;  //컬러 변경
    }
    void show() {
        cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.\n";
    } // 보여줘
};



int main() {
    ColorPoint zeroPoint; // BLACK 색에 (0, 0) 위치의 점  //즉, 기본값
    zeroPoint.show(); // zeroPoint를 출력한다.

    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show(); // cp를 출력한다.
}
