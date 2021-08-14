#include<iostream>
using namespace std;

#include"BaseMemory.h"
#include"Rom.h"


char ROM ::read(int i) {
    char mem = get_mem(i);{
        return mem;
    }
};
