#include<iostream>
using namespace std;


#include"BaseArray.h"
#include"MyQueue.h"


int main() {
    MyQueue mQ(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n); // ť�� ���� 
    }
    cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ��� 
    }
    cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}
