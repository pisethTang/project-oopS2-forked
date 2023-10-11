#include "superTest.h"

#include "testFarm.h"
#include "testWheat.h"
#include "testPotatoes.h"
#include "testCarrots.h"
#include "testChickens.h"
#include "testCows.h"
#include "testSheep.h"

void super_test::run_all_tests(){
    
    // ------------------------------Test crops classes ---------------------------------
    // Running the Carrots' tests
    test_carrots tc;
    tc.runCarrotsTests();

    // Running Potatoes' tests
    test_potatoes tp;
    tp.runPotatoesTests();

    // Running Wheat's tests
    test_wheat tw;
    tw.runWheatTests();


    // ------------------------------Test animal classes ---------------------------------    
    // test_cows tc1;
    // tc1.runCowsTests();


    test_chickens ct;
    ct.runChickensTests();

    // test_sheep ts;
    // ts.runSheepTests();

    test_farm tf;
    tf.runTests();
}
