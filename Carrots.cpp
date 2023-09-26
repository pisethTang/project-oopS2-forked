#include "Carrots.h"
#include "Farm.h"

int Carrots::getGrowthSpeed(Farm f1){
    //carrots need rain, it rains every 4 days, thus the growth speed is faster on those days
    if (f1.getDayNum() % 4 == 0){
        return 2;
    }
    else {
        return 1;
    }
}