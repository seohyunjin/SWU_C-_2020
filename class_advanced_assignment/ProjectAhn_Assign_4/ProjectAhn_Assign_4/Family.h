#pragma once
#include "Person.h"

class Family {
    Person *p; // Person 배열 포인터 
    int size; // Person 배열의 크기. 가족 구성원 수
    string name;
public:
    Family(string name, int size); // size 개수만큼 Person 배열 동적 생성
    void setName(int num, string name);
    void show(); // 모든 가족 구성원 출력 
    ~Family();
};
