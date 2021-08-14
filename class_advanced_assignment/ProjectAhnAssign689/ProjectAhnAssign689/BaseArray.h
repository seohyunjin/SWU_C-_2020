#pragma once

class BaseArray {
    int capacity; // 배열의 크기
    int* mem; // 정수 배열을 만들기 위한 메모리의 포인터
protected: // 생성자가 protected 
    BaseArray(int capacity = 100);
    ~BaseArray();
    void put(int index, int val);
    int get(int index);
    int getCapacity();
};

