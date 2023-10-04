#include "FarmTest.h"
#include "CarrotsTest.h"
#include <iostream>

int main() {
    // from farm test file
    FarmTest farmTest;
    farmTest.runTests();

    //carrots test
    CarrotsTest carrotsTest;
    carrotsTest.runTests();


    return 0;
}