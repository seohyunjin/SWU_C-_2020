#pragma once
#include "Person.h"

class Family {
    Person *p; // Person �迭 ������ 
    int size; // Person �迭�� ũ��. ���� ������ ��
    string name;
public:
    Family(string name, int size); // size ������ŭ Person �迭 ���� ����
    void setName(int num, string name);
    void show(); // ��� ���� ������ ��� 
    ~Family();
};
