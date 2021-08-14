#include<iostream>
#include<cstring>
using namespace std;

#include "Book.h"

Book::Book(const char* title, int price) {
    this->price = price;
    int size = strlen(title) + 1;
    this->title = new char[size];
    strcpy(this->title, title);
}

Book::Book(const Book& b) {
    this->price = b.price;
    int size = strlen(b.title) + 1;
    this->title = new char[size];
    strcpy(this->title, b.title);
}

Book::~Book() {
    delete[] title;
}

void Book::set(const char* title, int price) {
    if (this->title) delete[] this->title;
    this->price = price;
    int size = strlen(title) + 1;
    this->title = new char[size];
    strcpy(this->title, title);
}

