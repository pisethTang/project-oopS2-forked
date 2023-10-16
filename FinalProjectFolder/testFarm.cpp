#ifndef FARMTEST_H
#define FARMTEST_H

#include <iostream>

#include "Farm.h"

class test_farm{
 public:
  void runTests() {
    // testFarm();
    testGetDayNum();
    testGetTimeOfDay();
    // Add other test methods here
  };

 private:
 //testing getters and setters
  void testGetDayNum() {
    std::cout << "----------------------------------------- Farm's Tests -------------------------------------------" << std::endl;
    Farm farm;
    //Test case 1.1: Default day num
    if (farm.getDayNum() != 1) std::cout << "Test 1.1 failed!" << std::endl;

    // Test case 1.2: Setting day number to 1
    farm.setDayNum(1);
    if (farm.getDayNum() != 1) std::cout << "Test 1.2 failed!" << std::endl;
    
    // Test case 1.3: Setting day number to 14
    farm.setDayNum(14);
    if (farm.getDayNum() != 14) std::cout << "Test 1.3 failed!" << std::endl;
  }

  void testGetTimeOfDay(){
    
    Farm farm;
  
    //Test case 2.1: Default day time
    if (farm.getTimeOfDay() != 0) std::cout << "Test 2.1 failed!" << std::endl;
  

     // Test case 2.2: Setting day time to 2
    farm.setTimeOfDay(2);
    if (farm.getTimeOfDay() != 2) std::cout << "Test 2.2 failed!" << std::endl;
  
  
    // Test case 2.3: Setting day time to 4 <not sure what should happen here, should it default back to 0?>
    farm.setTimeOfDay(4);
    if (farm.getTimeOfDay() != 0) std::cout << "Test 2.3 failed!" << std::endl;
    


  }
};

#endif