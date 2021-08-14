#pragma once
#include "Circle.h"

class CircleManager {
    Circle* p; // Circle �迭�� ���� ������ 
    int size; // �迭�� ũ�� 
    int radius;
    string name;
public:
    CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ� 
    ~CircleManager();
    void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ��� 
    void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ��� 
};
