#pragma once

class Book {
    string title;
    int price;
public:
    Book(string title, int price);
    void set(string title, int price);
    void show() { cout << title << ' ' << price << "��" << endl; }
};
