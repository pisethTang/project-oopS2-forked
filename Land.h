#ifndef LAND_H
#define LAND_H

#include "Produce.h"

class Land{

    protected:
    bool empty_or_used;
    bool unlocked;
    //<add produce here> Not totally sure how this is going to work
    //<perhaps a Produce ptr to a new whichever, and then we delete that when it's harvested?
    //we would need to be careful that the ptr is never accessed when there is nothing there>

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