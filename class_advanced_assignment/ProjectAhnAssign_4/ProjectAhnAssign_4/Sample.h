#pragma once

class Sample {
    int* p;
    int size;
public:
    Sample(int n);
    void read();  // ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ���� 
    void write(); // ���� �迭�� ȭ�鿡 ��� 
    int big(); // ���� �迭���� ���� ū �� ���� 
    ~Sample();  // �Ҹ��� 
};

