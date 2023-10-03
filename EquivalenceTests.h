// EquivalenceTests.h

#include <iostream>
//#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testLargePosIntegers();
        testLargeNegIntegers();
        testPosNegIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testLargePosIntegers() {
        Addition addition;
        if (addition.add(1000000, 250000) != 1250000) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
    
    void testLargeNegIntegers() {
        Addition addition;
        if (addition.add(-250000, -750000) != -1000000) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testPosNegIntegers() {
        Addition addition;
        if (addition.add(20, -25) != -5) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }
};