#include "testCarrots.h"

<<<<<<< HEAD
int main(){
test_carrots carrot;

carrot.runTests();

return 0;
=======
void test_carrots::testConstructor() {
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
        {
            Carrots c6;
            // Assuming a large value that might cause overflow
           
            c6.setSellingPrice(std::numeric_limits<int>::max()); // std::numeric_limits<int>::max() basically returns the largest possible integers your machine can store, which is around 2 billion
            if (c6.getFutureSellPrice() != std::numeric_limits<int>::max()) std::cout << "Test 6 failed! Overflow not handled correctly." << std::endl;
            
        }

        // Test 7: Check for underflow when using small values
        {
            Carrots c7;
            // Assuming a small value that might cause underflow
           
            c7.setSellingPrice(std::numeric_limits<int>::min()); // whereas, std::numeric_limits<int>::min() returns the smallest integers in your machine, which is around -2 billion
            if (c7.getSellingPrice() != std::numeric_limits<int>::min()) std::cout << "Test 7 failed! Underflow not handled correctly." << std::endl;
        }

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

void test_carrots::runCarrotsTests(){
    test_carrots tc;
    tc.testConstructor();
>>>>>>> sethbranch
}