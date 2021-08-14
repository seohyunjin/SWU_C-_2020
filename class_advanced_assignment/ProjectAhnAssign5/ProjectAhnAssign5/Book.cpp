#include<iostream>
#include<cstring>
#include<string>
using namespace std;

#include "Book.h"

Book::Book(string title, int price) {
    this->price = price;
    this->title = title;
}

void Book::set(string title, int price) {
    this->price = price;
    this->title = title;
}
