#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"
#include "CircleManager.h"

int main() {
    int size;
    cout << "���� ���� >> ";
    cin >> size;
    CircleManager CM(size);
    CM.searchByName();
    CM.searchByArea();

}
