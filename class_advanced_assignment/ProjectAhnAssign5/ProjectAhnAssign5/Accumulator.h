#pragma once

class Accumulator {
    int value;
public:
    Accumulator(int value); // �Ű� ���� value�� ��� value�� �ʱ�ȭ�Ѵ�. 
    Accumulator& add(int n); // value�� n�� ���� ���� �����Ѵ�. 
    int get(); // ������ �� value�� �����Ѵ�. 
};
