#ifndef LAND_H
#define LAND_H

#include "Produce.h"
#include "Farm.h"

class Land{

    protected:
    bool empty_or_used;
    bool unlocked;
    Produce planted;
    //<add produce here> Not totally sure how this is going to work
    //<perhaps a Produce ptr to a new whichever, and then we delete that when it's harvested?
    //we would need to be careful that the ptr is never accessed when there is nothing there>

    public:
    //constructors
    Land();     //initialises without produce, and empty

    //functions
    bool getEmptyOrUsed();
    void setEmptyOrUsed(bool a);
    bool getUnlocked();
    void setUnlocked(bool b);
    void setProduce(Produce newPlanted);
    //<put the above in the diagram>

    void plantProduce(int produceIteration, Farm farm);    //Also takes away money and only does the following:
                                                //this function finds the first available element in
                                                //the Land vector and assigns that pointer to a produce
                                                //of iteration produceIteration

    void harvestProduce(); //this function removes the produce and adds money

    //destructor

};

#endif