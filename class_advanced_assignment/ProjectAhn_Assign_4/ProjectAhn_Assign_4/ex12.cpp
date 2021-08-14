#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"
#include "CircleManager.h"

int main() {
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager CM(size);
    CM.searchByName();
    CM.searchByArea();

}
