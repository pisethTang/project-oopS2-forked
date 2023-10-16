#include "testWheat.h"



void test_wheat::testConstructor() {
        // Test 1: Check if the constructor initializes cost per day correctly
        {
            Wheat w1;
            if (w1.getCostPerDay() != 10) std::cout << "Test 1 failed! Incorrect cost per day." << std::endl;  
        }

        // Test 2: Check if the constructor initializes selling price correctly
        {
            Wheat w2;
            if (w2.getSellingPrice() != 25) std::cout << "Test 2 failed! Incorrect selling price." << std::endl;
            
        }

        // Test 3: Check if the constructor initializes future selling price correctly
        {
            Wheat w3;
            if (w3.getFutureSellPrice() != 175) std::cout << "Test 3 failed! Incorrect future selling price." << std::endl;
            
        }

        // Test 4: Check if the constructor initializes buying price correctly
        {
            Wheat w4;
            if (w4.getBuyingPrice() != 25) std::cout << "Test 4 failed! Incorrect buying price." << std::endl;
            
        }

        // Test 5: Check if the constructor initializes growth stage correctly
        {
            Wheat w5;
            if (w5.getGrowthStage() != 0) std::cout << "Test 5 failed! Incorrect growth stage." << std::endl;
        
        }
        // Test 6: Check for overflow when using large values
        // {
        //     Wheat w6;
        //     // Assuming a large value that might cause overflow
        //    
        //     w6.setFutureSellPrice(std::numeric_limits<int>::max()); // std::numeric_limits<int>::max() basically returns the largest possible integers your machine can store, which is around 2 billion
        //     if (w6.getFutureSellPrice() != std::numeric_limits<int>::max()) {
        //         std::cout << "Test 6 failed! Overflow not handled correctly." << std::endl;
        //     }
        // }

        // Test 7: Check for underflow when using small values
        // {
        //     Wheat w7;
        //     // Assuming a small value that might cause underflow
        //    
        //     w7.setCostPerDay(std::numeric_limits<int>::min()); // whereas, std::numeric_limits<int>::min() returns the smallest integers in your machine, which is around -2 billion
        //     if (w7.getCostPerDay() != std::numeric_limits<int>::min()) {
        //         std::cout << "Test 7 failed! Underflow not handled correctly." << std::endl;
        //     }
        // }

        // Test 8: Check invariants (e.g., selling price should be greater than cost per day)
        {
            Wheat p8;
            if (p8.getSellingPrice() <= p8.getCostPerDay()) std::cout << "Test 8 failed! Invariant not maintained." << std::endl;
            
        }

        // Test 9: Check constant values (e.g., buying price should always be 25)
        {
            Wheat p9;
            if (p9.getBuyingPrice() != 25) std::cout << "Test 9 failed! Incorrect constant value." << std::endl;
            
        }
}


void run_tests(){
    test_wheat tw;
    tw.runWheatTests();
}