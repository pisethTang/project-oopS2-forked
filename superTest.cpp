#include "superTest.h"
#include "testCows.h"



void super_test::run_all_tests(){
    
    // ------------------------------Test crops classes ---------------------------------
    // Running the Carrots' tests
    test_carrots Tcarrots;
    Tcarrots.runCarrotsTests();

    // Running Potatoes' tests
    test_potatoes Tpotatoes;
    Tpotatoes.runPotatoesTests();

    // Running Wheat's tests
    test_wheat Twheat;
    Twheat.runWheatTests();


    // ------------------------------Test animal classes ---------------------------------    
    test_cows Tcows;
    Tcows.runCowsTests();

    test_sheep Tsheep;
    Tsheep.runSheepTests();

    test_chickens Tchicken;
    Tchicken.runChickensTests();

    test_farm Tfarm;
    Tfarm.runTests();
}
