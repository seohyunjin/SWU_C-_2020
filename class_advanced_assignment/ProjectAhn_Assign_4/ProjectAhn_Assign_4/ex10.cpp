#include <iostream>
#include <string>
using namespace std;

# include "Person.h"
# include "Family.h"


int main() {
    Family* simpson = new Family("Simpson", 3); // 3������ ������ Simpson ���� 
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}
