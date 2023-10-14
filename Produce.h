#ifndef PRODUCE_H
#define PRODUCE_H

#include <string>
// using namespace std;

class Produce{
    protected:
    std::string name;        //<do we even need a name?>
    int cost_per_day;   //the cost of upkeep per day
    int selling_price;  //the price that a Produce sells for
    int buying_price;   //the price to buy and plant a Produce

    public:
    //constructors
    Produce();
    //<do we need any constructors in between here?>
    Produce(std::string newName, int newCost, int newSellPrice, int newBuyPrice);

    //functions
    virtual std::string getName();
    int getCostPerDay();
    int getSellingPrice();
    int getBuyingPrice();
    void setSellingPrice(int newSellPrice);

    //destructor    

};


#endif