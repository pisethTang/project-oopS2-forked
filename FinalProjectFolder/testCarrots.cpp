#include "testCarrots.h"

void test_carrots::testConstructor() {
    std::cout << "----------------------------------------- Carrots Tests -------------------------------------------" << std::endl;
    // Test 1: Check if the constructor initializes cost per day correctly
    {
        Carrots c1;
        if (c1.getCostPerDay() != 10) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;  
    }

    // Test 2: Check if the constructor initializes selling price correctly
    {
        Carrots c2;
        if (c2.getSellingPrice() != 25) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
    }

    // Test 3: Check if the constructor initializes future selling price correctly
    {
        Carrots c3;
        if (c3.getFutureSellPrice() != 175) std::cout << "Test 3 failed! Incorrect future selling price." << std::endl;
    }

    // Test 4: Check if the constructor initializes buying price correctly
    {
        Carrots c4;
        if (c4.getBuyingPrice() != 25) std::cout << "Test 4 failed! Incorrect buying price." << std::endl;
    }

    // Test 5: Check if the constructor initializes growth stage correctly
    {
        Carrots c5;
        if (c5.getGrowthStage() != 0) std::cout << "Test 5 failed! Incorrect growth stage." << std::endl; 
    }

    // Test 6: Check invariants (e.g., selling price should be greater than cost per day)
    {
        Carrots c6;
        if (c6.getSellingPrice() <= c6.getCostPerDay()) std::cout << "Test 6 failed! Invariant not maintained." << std::endl;
    }

    // Test 7: Check constant values (e.g., buying price should always be 25)
    {
        Carrots c7;
        if (c7.getBuyingPrice() != 25) std::cout << "Test 7 failed! Incorrect constant value." << std::endl;
    }

    // Test 8: Check for Carrots' growth speed
    {
        Carrots c8;
        if (c8.getGrowthSpeed(false, 10) == 2) std::cout << "Test 8 failed! Incorrect growth speed of carrots." << std::endl;
    }

    // Test 9: Check if the future selling price is updated correctly
    {
        Carrots c9;
        c9.setSellingPrice(150);
        if(c9.getSellingPrice() != 150) std::cout << "Test 9 failed! Carrot's selling price has been incorrectly set." << std::endl;
    }
}

void test_carrots::runCarrotsTests() {
    test_carrots tc;
    tc.testConstructor();
    // Add more test calls as needed
}
