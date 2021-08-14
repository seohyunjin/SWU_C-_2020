#pragma once

class MyIntStack {
    int* p; // ���� �޸𸮷� ����� ������ 
    int size; // ������ �ִ� ũ�� 
    int tos; // ������ ž�� ����Ű�� �ε��� 
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s); // ���� ������ 
    ~MyIntStack();
    bool push(int n); // ���� n�� ���ÿ� Ǫ���Ѵ�.
        // ������ �� �� ������ false��, �ƴϸ� true ���� 
    bool pop(int& n); // ������ ž�� �ִ� ���� n�� ���Ѵ�.
        // ���� ������ ��� ������ false��, �ƴϸ� true ���� 
};
