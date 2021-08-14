#pragma once


class BaseMemory {
    char* mem;
protected:
    BaseMemory(int size);
    void set_mem(char* x);
    void put_mem(int i, char copy);
    char get_mem(int i);

};