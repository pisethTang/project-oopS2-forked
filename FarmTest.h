#ifndef FARMTEST_H
#define FARMTEST_H


#include <iostream>
#include "Farm.h"

class FarmTest {
public:
    void runTests() {
        //testFarm();
        testGetDayNum();
    // Add other test methods here
    };

private:
    void testGetDayNum(){
         {
        Farm farm;
        if(farm.getDayNum() !=0){
            std::cout << "Test 1 failed!" << std::endl;
        }
        }
        {
        Farm farm;
        farm.setDayNum(1);
        if(farm.getDayNum()!=1){
            std::cout << "Test 1 failed!" << std::endl;
        }
        }
        {
        Farm farm;
        farm.setDayNum(14);
        if(farm.getDayNum()!=14){
            std::cout << "Test 1 failed!" << std::endl;
        }
        }
    }
};

#endif