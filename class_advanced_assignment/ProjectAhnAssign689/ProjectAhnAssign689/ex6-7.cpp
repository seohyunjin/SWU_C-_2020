#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

#include "Random.h"

int main() {
    Random::seed();
    cout << "1���� 100���� ������ ���� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextInt(1, 100) << ' ';
    }
    cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl << "������ �Ǽ��� 10���� ����մϴ�\n";
    for (int i = 0; i < 10; i++) {
        cout << Random::nextDouble() << ' ';
        if (i == 4) cout << endl;
    }
}
