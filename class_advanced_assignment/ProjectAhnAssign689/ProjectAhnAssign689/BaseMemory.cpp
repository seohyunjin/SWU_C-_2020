#include<iostream>
using namespace std;

#include"BaseMemory.h"


BaseMemory::BaseMemory(int size) {
    mem = new char[size]; 
}

void BaseMemory::set_mem(char* x) {
    mem = x;
}

void BaseMemory::put_mem(int i, char copy) {
    mem[i] = copy;
}

char BaseMemory::get_mem(int i) {
    return mem[i];
}

