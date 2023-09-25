#ifndef PRODUCE_H
#define PRODUCE_H

#include <string>
using namespace std;

class Produce{
    protected:
    string name;        //<do we even need a name?>
    int cost_per_day;
    int selling_price;
    int buying_price;

    public:
    //constructors
    Produce();
    //<do we need any constructors in between here?>
    Produce(string newName, int newCost, int newSellPrice, int newBuyPrice);

    //functions
    string getName();
    int getCostPerDay();
    int getSellingPrice();
    int getBuyingPrice();

    //destructor    

};


#endif

