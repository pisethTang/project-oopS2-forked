#ifndef CARROTSTEST_H
#define CARROTSTEST_H


#include <iostream>
#include "Farm.h"
#include "Carrots.h"

class test_carrots{
public:
    void runTests() {
        testGetCostPerDay();
    // Add other test methods here
    };

private:
    void testGetCostPerDay(){
         {
        Carrots c1;
        if(c1.getCostPerDay() !=10){
            std::cout << "Test 1 failed!" << std::endl;
        }
        }
    }
};

#endif