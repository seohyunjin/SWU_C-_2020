#include<iostream>
#include<cstring>
#include<string>
using namespace std;

#include "Book.h"

int main() {
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}
