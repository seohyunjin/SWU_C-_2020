#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point() { this->x = 0; this->y = 0; } // �⺻������ �����ؾ߸� ���� �ȶߴ���,.. �⺻���� �־��־����
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x = 0, int y = 0, string color = "BLACK") { // black���� (0,0)��ġ�� ��
        Point(x, y);
        this->color = color;
    } // ����
    void setPoint(int x, int y) {
        move(x, y);  //���� ��ġ ����
    }
    void setColor(string color) {
        this->color = color;  //�÷� ����
    }
    void show() {
        cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�.\n";
    } // ������
};



int main() {
    ColorPoint zeroPoint; // BLACK ���� (0, 0) ��ġ�� ��  //��, �⺻��
    zeroPoint.show(); // zeroPoint�� ����Ѵ�.

    ColorPoint cp(5, 5);
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show(); // cp�� ����Ѵ�.
}
