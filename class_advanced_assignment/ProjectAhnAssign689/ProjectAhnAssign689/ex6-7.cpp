#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

#include "Random.h"

int main() {
    Random::seed();
    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextInt(1, 100) << ' ';
    }
    cout << endl << "알파벳을 랜덤하게 10개를 출력합니다\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl << "랜덤한 실수를 10개를 출력합니다\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << ' ';
        if (i == 4) cout << endl;
    }
}
