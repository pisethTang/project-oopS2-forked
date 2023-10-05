#include "superTest.h"

void super_test::run_all_tests(){
    // Running the Carrots' tests
    test_carrots tc;
    tc.runTests();

    // Running Potatoes' tests
    test_potatoes tp;
    tp.runTests();

    // Running Wheat's tests
    test_wheat tw;
    tw.runTests();

    
}


