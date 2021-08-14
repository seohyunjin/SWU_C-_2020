#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

#include "Random.h"

void Random::seed() {
    srand((unsigned)time(0)); 
}

int Random::nextInt(int min, int max) {
    int a = 0;
    while (true) {
        a = rand() % (max + 1);
        if (min <= a)
            break;
    }
    return a;
}

char Random::nextAlphabet() {
    char b = 0;
    while (true) {
        b = rand() % 'z';
        if (b >= 'a' || ('A' <= b && b <= 'Z'))
            break;
    }
    return b;
}

double Random::nextDouble() {
    double c = 0;
    double max = 32767;
    c = rand() / max;
    return c;
}
