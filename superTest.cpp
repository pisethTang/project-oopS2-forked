#include "superTest.h"

void super_test::run_all_tests(){
    // Running the Carrots' tests
    test_carrots tc;
    tc.runCarrotsTests();

    // Running Potatoes' tests
    test_potatoes tp;
    tp.runPotatoesTests();

    // Running Wheat's tests
    test_wheat tw;
    tw.runWheatTests();

    test_farm tf;
    tf.runTests();
}
