#ifndef LAND_H
#define LAND_H

#include "Produce.h"

class Land{

    protected:
    bool empty_or_used;
    //<add produce here> Not totally sure how this is going to work

    public:
    //constructors
    Land();     //initialises without produce, and empty

    //functions
    Produce getProduce();
    void plantProduce(int produceIteration);
    void harvestProduce(); //this function removes the produce and adds money

    //destructor

};

#endif