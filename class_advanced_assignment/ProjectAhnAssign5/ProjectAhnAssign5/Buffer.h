#pragma once

class Buffer {
    string text;
public:
    Buffer(string text);
    void add(string next);
    void print();
};
