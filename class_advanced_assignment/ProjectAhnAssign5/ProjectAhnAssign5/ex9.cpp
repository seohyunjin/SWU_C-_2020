#include<iostream>
using namespace std;

#include "Accumulator.h"

int main() {
    Accumulator acc(10);
    acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�. 
    cout << acc.get(); // 28 ��� 
}
