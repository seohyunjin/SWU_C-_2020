#pragma once

class MyIntStack {
    int p[10]; // �ִ� 10���� ���� ���� 
    int tos; // ������ ����⸦ ����Ű�� �ε��� 
public:
    MyIntStack();
    bool push(int n); // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ���� 
    bool pop(int& n); // ���Ͽ� n�� ����. ������ ��� ������ false, �ƴϸ� true ���� 
};
