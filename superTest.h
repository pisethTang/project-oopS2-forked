#ifndef SUPERTEST_H
#define SUPERTEST_H

// include several header files of test files
// #include "testCrops"
// #include "testAnimals"
#include "testWheat.h"
#include "testPotatoes.h"
#include "testCarrots.h"

class super_test{
    public:
        void run_all_tests();
};  


#endif