#pragma once

class Dept {
    int size; // scores �迭�� ũ�� 
    int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ� 
public:
    Dept(int size);
    Dept(Dept& dept); // ���� ������ 
    ~Dept(); // �Ҹ��� 
    int getSize();
    void read(); // size ��ŭ Ű���忡�� ������ �о� scores �迭�� ���� 
    bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� true ���� 
};
