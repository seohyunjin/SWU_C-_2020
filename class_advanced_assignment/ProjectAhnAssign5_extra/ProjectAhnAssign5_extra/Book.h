#pragma once


class Book {
    char* title; // ���� ���ڿ� 
    int price; // ���� 
public:
    Book(const Book& b);
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);
    void show() { cout << title << ' ' << price << "��" << endl; }
};
