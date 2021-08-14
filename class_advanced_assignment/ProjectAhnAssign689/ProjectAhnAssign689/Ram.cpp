#include<iostream>
using namespace std;

#include"BaseMemory.h"
#include"Ram.h"


void RAM::write(int i, char rom_mem) {
    put_mem(i, rom_mem);
}

char RAM::read(int i) {
    char mem = get_mem(i);
    return mem;
}

