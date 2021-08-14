#include<iostream>
using namespace std;

#include "Accumulator.h"


Accumulator::Accumulator(int value) {
    this->value = value; // 매개 변수 value로 멤버 value를 초기화.
}

Accumulator& Accumulator::add(int n) {
    value += n; // value에 n을 더해 값을 누적한다.
    return *this; // 자기 자신의 참조 리턴
}

int Accumulator::get() {
    return value; // 누적된 값 value를 리턴한다.
}
