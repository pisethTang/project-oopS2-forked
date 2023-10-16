#include "testChickens.h"

void test_chickens::testConstructor() {
        // Test 1: Check if the constructor initializes cost per day correctly
        std::cout << "----------------------------------------- Chicken's Tests -------------------------------------------" << std::endl;

        {
            Chickens c1;
            if (c1.getCostPerDay() != 25) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;
        }

        // Test 2: Check if the constructor initializes selling price correctly
        {
            Chickens c2;
            if (c2.getSellingPrice() != 175) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
        }

        // Test 3: Check if the constructor initializes buying price correctly
        {
            Chickens c3;
            if (c3.getBuyingPrice() != 175) std::cout << "Test 3 failed! Incorrect buying price." << std::endl;
        }

        // Test 4: Check if the getValuePerDay function returns correct values for standard food
        {
            Chickens c4;
            if (c4.getValuePerDay(false, 7) != 150) std::cout << "Test 4 failed! Incorrect value for standard food." << std::endl;
        }

        // Test 5: Check if the getValuePerDay function returns correct values for good food
        {
            Chickens c5;
            if (c5.getValuePerDay(true, 7) != 300) std::cout << "Test 5 failed! Incorrect value for good food." << std::endl;
        }

        // Test 6: Check if the getValuePerDay function returns correct values for other days
        {
            Chickens c6;
            // Assuming it's not the 7th day
            if (c6.getValuePerDay(true, 5) != 0) std::cout << "Test 6 failed! Incorrect value for other days." << std::endl;
        }
}

void test_chickens::runChickensTests(){
    test_chickens tc;
    tc.testConstructor(); 
}

