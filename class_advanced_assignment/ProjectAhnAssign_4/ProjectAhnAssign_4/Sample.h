#pragma once

class Sample {
    int* p;
    int size;
public:
    Sample(int n);
    void read();  // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음 
    void write(); // 정수 배열을 화면에 출력 
    int big(); // 정수 배열에서 가장 큰 수 리턴 
    ~Sample();  // 소멸자 
};

