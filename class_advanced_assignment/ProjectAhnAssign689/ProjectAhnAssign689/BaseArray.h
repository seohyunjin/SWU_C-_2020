#pragma once

class BaseArray {
    int capacity; // �迭�� ũ��
    int* mem; // ���� �迭�� ����� ���� �޸��� ������
protected: // �����ڰ� protected 
    BaseArray(int capacity = 100);
    ~BaseArray();
    void put(int index, int val);
    int get(int index);
    int getCapacity();
};

