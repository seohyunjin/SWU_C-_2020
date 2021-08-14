#pragma once

class MyQueue : public BaseArray {
    int front = 0;
    int rear = 0;
public:
    MyQueue(int capacity) : BaseArray(capacity) { ; }
    void enqueue(int n);
    int capacity();
    int length();
    int dequeue();
};
