#include <iostream>
using namespace std;

#include "CoffeeVendingMachine.h"
#include "Container.h"

int main() {

    CoffeeVendingMachine* coffee = new CoffeeVendingMachine;
    coffee->run();
    delete coffee;
}
