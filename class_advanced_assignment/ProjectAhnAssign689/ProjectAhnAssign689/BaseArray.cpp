#include<iostream>
using namespace std;


#include"BaseArray.h"


BaseArray::BaseArray(int capacity ) {
    this->capacity = capacity; 
    mem = new int[capacity];
}

BaseArray::~BaseArray() {
    delete[] mem; 
}

void BaseArray::put(int index, int val) {
    mem[index] = val; 
}

int BaseArray::get(int index) { 
    return mem[index]; 
}

int BaseArray::getCapacity() {
    return capacity; 
}
