#ifndef FARMTEST_H
#define FARMTEST_H

#include <iostream>

#include "Farm.h"

class test_farm{
 public:
  void runTests() {
    testGetDayNum();
    // Add other test methods here
  };

 private:
 //testing getters and setters
  void testGetDayNum();
};

#endif