#include "testSheep.h"

void test_sheep::testConstructor() {
        std::cout << "----------------------------------------- Sheep's Tests -------------------------------------------" << std::endl;

        // Test 1: Check if the constructor initializes cost per day correctly
        {
            Sheep s1;
            if (s1.getCostPerDay() != 35) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;
        }

        // Test 2: Check if the constructor initializes selling price correctly
        {
            Sheep s2;
            if (s2.getSellingPrice() != 200) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
        }

        // Test 3: Check if the constructor initializes buying price correctly
        {
            Sheep s3;
            if (s3.getBuyingPrice() != 200) std::cout << "Test 3 failed! Incorrect buying price." << std::endl;
        }

        // Test 4: Check if the getValuePerDay function returns correct values for standard food
        {
            Sheep s4;
            if (s4.getValuePerDay(false, 7) != 0) std::cout << "Test 4 failed! Incorrect value for standard food." << std::endl;
        }

        // Test 5: Check if the getValuePerDay function returns correct values for good food
        {
            Sheep s5;
            if (s5.getValuePerDay(true, 7) != 0) std::cout << "Test 5 failed! Incorrect value for good food." << std::endl;
    }

        // Test 6: Check if the getValuePerDay function returns correct values for other days
        {
            Sheep s6;
            // Assuming it's not the 7th day
            if (s6.getValuePerDay(true, 5) != 0) std::cout << "Test 6 failed! Incorrect value for other days." << std::endl;
        }
}

void test_sheep::runSheepTests(){
    test_sheep ts;
    ts.testConstructor();
}