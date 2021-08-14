#include<iostream>
#include<cstring>
using namespace std;

#include "Book.h"

int main() {
    Book cpp("명품 C++", 10000);
    Book java = cpp; // 복사 생성자 호출됨 
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}
