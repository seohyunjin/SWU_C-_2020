#pragma once

class RAM : public BaseMemory {
public:
    RAM(int mem_size) : BaseMemory(mem_size) { ; }

    void write(int i, char rom_mem);
    char read(int i);
};
