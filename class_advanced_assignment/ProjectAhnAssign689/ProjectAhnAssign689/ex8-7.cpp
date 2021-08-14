#include<iostream>
using namespace std;

#include"BaseMemory.h"
#include"Rom.h"
#include"Ram.h"

int main() {
    char x[5] = { 'h', 'e', 'l', 'l', 'o' };
    ROM biosROM(1024 * 10, x, 5); // 10KB�� ROM �޸�. �迭 x�� �ʱ�ȭ�� 
    RAM mainMemory(1024 * 1024); // 1MB�� ROM �޸� 

    // 0 �������� 4�������� biosRom���� �о� mainMemory�� ���� 
    for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
    for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}
