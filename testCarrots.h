#ifndef CARROTSTEST_H
#define CARROTSTEST_H


#include <iostream>
#include <limits>
#include "Carrots.h"

class test_carrots{
public:
    void runTests() {
        testConstructor(); // When testing a class constructor,
        // the goal is to ensure that it correctly initializes 
        //the object's state, and that the object is in a valid 
        // and expected state after construction. 

    // Add other test methods here
    // add test getGrowthSpeed() in the future
        
    };

private:
    void testConstructor() {
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
        // Seth: <I am unsure on >
        // Test 6: Check for overflow when using large values
        // {
        //     Carrots c6;
        //     // Assuming a large value that might cause overflow
        //    
        //     c6.setFutureSellPrice(std::numeric_limits<int>::max()); // std::numeric_limits<int>::max() basically returns the largest possible integers your machine can store, which is around 2 billion
        //     if (c6.getFutureSellPrice() != std::numeric_limits<int>::max()) {
        //         std::cout << "Test 6 failed! Overflow not handled correctly." << std::endl;
        //     }
        // }

        // Test 7: Check for underflow when using small values
        // {
        //     Carrots c7;
        //     // Assuming a small value that might cause underflow
        //    
        //     c7.setCostPerDay(std::numeric_limits<int>::min()); // whereas, std::numeric_limits<int>::min() returns the smallest integers in your machine, which is around -2 billion
        //     if (c7.getCostPerDay() != std::numeric_limits<int>::min()) {
        //         std::cout << "Test 7 failed! Underflow not handled correctly." << std::endl;
        //     }
        // }

        // Test 8: Check invariants (e.g., selling price should be greater than cost per day)
        {
            Carrots c8;
            if (c8.getSellingPrice() <= c8.getCostPerDay()) std::cout << "Test 8 failed! Invariant not maintained." << std::endl;
            
        }

        // Test 9: Check constant values (e.g., buying price should always be 25)
        {
            Carrots c9;
            if (c9.getBuyingPrice() != 25) std::cout << "Test 9 failed! Incorrect constant value." << std::endl;
            
        }
    }

   

};

#endif
