#include "testPotatoes.h"

void test_potatoes::testConstructor() {
        std::cout << "----------------------------------------- Potaotes' Tests -------------------------------------------" << std::endl;
        // Test 1: Check if the constructor initializes cost per day correctly
        {
            Potatoes p1;
            if (p1.getCostPerDay() != 20) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;  
        }

        // Test 2: Check if the constructor initializes selling price correctly
        {
            Potatoes p2;
            if (p2.getSellingPrice() != 35) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
            
        }

        // Test 3: Check if the constructor initializes future selling price correctly
        {
            Potatoes p3;
            if (p3.getFutureSellPrice() != 225) std::cout << "Test 3 failed! Incorrect future selling price." << std::endl;
            
        }

        // Test 4: Check if the constructor initializes buying price correctly
        {
            Potatoes p4;
            if (p4.getBuyingPrice() != 35) std::cout << "Test 4 failed! Incorrect buying price." << std::endl;
            
        }

        // Test 5: Check if the constructor initializes growth stage correctly
        {
            Potatoes p5;
            p5.setGrowthStage(5); // std::numeric_limits<int>::max() basically returns the largest possible integers your machine can store, which is around 2 billion
            if (p5.getGrowthStage() != 5) std::cout << "Test 5 failed! Incorrect growth stage." << std::endl; 
        }
       

        // Test 6: Check constant values (e.g., buying price should always be 25)
        {
            Potatoes p6;
            if (p6.getBuyingPrice() != 35) std::cout << "Test 6 failed! Incorrect constant value." << std::endl;
            
        }

        // Test 7: Check for Potatoes' growth speed
        {
            Potatoes p7;
            if (p7.getGrowthSpeed(false, 10) != 2) std::cout << "Test 7 failed! Incorrect growth speed of potato." << std::endl;
        }


        // Test 8: Check if the selling price is updated correctly
        {
            Potatoes p8;
            p8.setSellingPrice(100);
            if(p8.getSellingPrice() != 135) std::cout << "Test 8 failed! Potato's selling price has been incorrectly set." <<std::endl;
            
        }
    }


void test_potatoes::runPotatoesTests(){
    test_potatoes tp;
    tp.testConstructor();
}
   