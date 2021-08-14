#include <iostream>
#include <string>
using namespace std;

#include "Person.h"

Person::Person() {} // »ý¼ºÀÚ

void Person::set(string N, string T) {
    name = N;
    tel = T;
}

string Person::getName() { 
    return name; 
}

string Person::getTel() {
    return tel; 
}