#include <iostream>
using namespace std;

class BaseArray {
    int capacity; // �迭�� ũ��
    int* mem; // ���� �迭�� ����� ���� �޸��� ������
protected: // �����ڰ� protected 
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

//basearrayŬ������ ��ӹ޾� �������� �۵��ϴ� mystack Ŭ������ �ۼ�
class MyQueue : public BaseArray {
    int front = 0;
    int rear = 0;
public:
    MyQueue(int capacity) : BaseArray(capacity) { ; }
    void enqueue(int n) {
        if (rear >= getCapacity()) {
            cout << "Queue is full...\n";
            exit(1);
        }
        rear++;
        put(rear, n);
    }
    int capacity() {
        return getCapacity();
    }
    int length() {
        return rear;
    }
    int dequeue() {
        if (rear < 0) {
            cout << "Queue is empty...\n";
            exit(1);
        }
        ++front;
        rear--;
        return get(front);
    }
};

int main() {
    MyQueue mStack(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.enqueue(n); // ť�� ���� 
    }
    cout << "ť�� �뷮:" << mStack.capacity() << ", ť�� ũ��:" << mStack.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    while (mStack.length() != 0) {
        cout << mStack.dequeue() << ' '; // ť���� �����Ͽ� ��� 
    }
    cout << endl << "ť�� ���� ũ�� : " << mStack.length() << endl;
}
