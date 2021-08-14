#include<iostream>
using namespace std;

#include "Accumulator.h"


Accumulator::Accumulator(int value) {
    this->value = value; // �Ű� ���� value�� ��� value�� �ʱ�ȭ.
}

Accumulator& Accumulator::add(int n) {
    value += n; // value�� n�� ���� ���� �����Ѵ�.
    return *this; // �ڱ� �ڽ��� ���� ����
}

int Accumulator::get() {
    return value; // ������ �� value�� �����Ѵ�.
}
