#pragma once

class Dept {
    int size;
    int* scores;
public:
    Dept(int size);
    ~Dept();
    int getSize();
    void read();
    bool isOver60(int index);
};
