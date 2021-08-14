#include <iostream>
using namespace std;


#include "Container.h"

Container::Container() {
    size = 10; 
}

void Container::fill() {
    size = 10;
}

void Container::consume() {
    size--;
}

int Container::getSize() {
    return size;
}

