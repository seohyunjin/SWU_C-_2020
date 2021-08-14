#include<iostream>
using namespace std;


#include"BaseArray.h"
#include"MyQueue.h"


void MyQueue::enqueue(int n) {
   if (rear >= getCapacity()) {
            cout << "Queue is full...\n";
            exit(1);
   }
   rear++;
   put(rear, n);
}
    
int MyQueue::capacity() {
    return getCapacity();
}
    
int MyQueue::length() {
        return rear;
}
    
int MyQueue::dequeue() {
   if (rear < 0) {
            cout << "Queue is empty...\n";
            exit(1);
   }
   ++front;
   rear--;
   return get(front);
}
