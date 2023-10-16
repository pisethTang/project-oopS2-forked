#include "testWheat.h"

void test_wheat::testConstructor() {
    std::cout << "----------------------------------------- Wheat Tests -------------------------------------------" << std::endl;
    // Test 1: Check if the constructor initializes cost per day correctly
    {
        Wheat w1;
        if (w1.getCostPerDay() != 15) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;  
    }

    // Test 2: Check if the constructor initializes selling price correctly
    {
        Wheat w2;
        if (w2.getSellingPrice() != 10) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
    }

    // Test 3: Check if the constructor initializes future selling price correctly
    {
        Wheat w3;
        if (w3.getFutureSellPrice() != 125) std::cout << "Test 3 failed! Incorrect future selling price." << std::endl;
    }

    // Test 4: Check if the constructor initializes buying price correctly
    {
        Wheat w4;
        if (w4.getBuyingPrice() != 10) std::cout << "Test 4 failed! Incorrect buying price." << std::endl;
    }

    // Test 5: Check if the constructor initializes growth stage correctly
    {
        Wheat w5;
        if (w5.getGrowthStage() != 0) std::cout << "Test 5 failed! Incorrect growth stage." << std::endl; 
    }


    // Test 6: Check constant values (e.g., buying price should always be 10)
    {
        Wheat w6;
        if (w6.getBuyingPrice() != 10) std::cout << "Test 6 failed! Incorrect constant value." << std::endl;
    }

    // Test 7: Check for Wheat's growth speed
    {
        Wheat w7;
        if (w7.getGrowthSpeed(false, 10) == 2) std::cout << "Test 7 failed! Incorrect growth speed of wheat." << std::endl;
    }

    // Test 8: Add more tests as needed for specific functionality
     {
            Wheat w8;
            w8.setSellingPrice(100);
            if(w8.getSellingPrice() != 110) std::cout << "Test 8 failed! Wheat's selling price has been incorrectly set." <<std::endl;
            
    }

}

void test_wheat::runWheatTests() {
    test_wheat tw;
    tw.testConstructor();
    // Add more test calls as needed
}
