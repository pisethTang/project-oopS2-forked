#ifndef TESTPOTATOES_H
#define TESTPOTATOES_H




#include <iostream>
#include <limits>
#include "Potatoes.h"

class test_potatoes{
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
            Potatoes p1;
            if (p1.getCostPerDay() != 10) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;  
        }

        // Test 2: Check if the constructor initializes selling price correctly
        {
            Potatoes p2;
            if (p2.getSellingPrice() != 25) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
            
        }

        // Test 3: Check if the constructor initializes future selling price correctly
        {
            Potatoes p3;
            if (p3.getFutureSellPrice() != 175) std::cout << "Test 3 failed! Incorrect future selling price." << std::endl;
            
        }

        // Test 4: Check if the constructor initializes buying price correctly
        {
            Potatoes p4;
            if (p4.getBuyingPrice() != 25) std::cout << "Test 4 failed! Incorrect buying price." << std::endl;
            
        }

        // Test 5: Check if the constructor initializes growth stage correctly
        {
            Potatoes p5;
            if (p5.getGrowthStage() != 0) std::cout << "Test 5 failed! Incorrect growth stage." << std::endl;
        
        }
        // Test 6: Check for overflow when using large values
        // {
        //     Potatoes p6;
        //     // Assuming a large value that might cause overflow
        //    
        //     p6.setFutureSellPrice(std::numeric_limits<int>::max()); // std::numeric_limits<int>::max() basically returns the largest possible integers your machine can store, which is around 2 billion
        //     if (p6.getFutureSellPrice() != std::numeric_limits<int>::max()) {
        //         std::cout << "Test 6 failed! Overflow not handled correctly." << std::endl;
        //     }
        // }

        // Test 7: Check for underflow when using small values
        // {
        //     Potatoes p7;
        //     // Assuming a small value that might cause underflow
        //    
        //     p7.setCostPerDay(std::numeric_limits<int>::min()); // whereas, std::numeric_limits<int>::min() returns the smallest integers in your machine, which is around -2 billion
        //     if (p7.getCostPerDay() != std::numeric_limits<int>::min()) {
        //         std::cout << "Test 7 failed! Underflow not handled correctly." << std::endl;
        //     }
        // }

        // Test 8: Check invariants (e.g., selling price should be greater than cost per day)
        {
            Potatoes p8;
            if (p8.getSellingPrice() <= p8.getCostPerDay()) std::cout << "Test 8 failed! Invariant not maintained." << std::endl;
            
        }

        // Test 9: Check constant values (e.g., buying price should always be 25)
        {
            Potatoes p9;
            if (p9.getBuyingPrice() != 25) std::cout << "Test 9 failed! Incorrect constant value." << std::endl;
            
        }
    }

   

};

#endif
