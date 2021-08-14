#include<iostream>
using namespace std;

#include"BaseMemory.h"
#include"Rom.h"
#include"Ram.h"

int main() {
    char x[5] = { 'h', 'e', 'l', 'l', 'o' };
    ROM biosROM(1024 * 10, x, 5); // 10KB의 ROM 메모리. 배열 x로 초기화됨 
    RAM mainMemory(1024 * 1024); // 1MB의 ROM 메모리 

    // 0 번지에서 4번지까지 biosRom에서 읽어 mainMemory에 복사 
    for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
    for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}
