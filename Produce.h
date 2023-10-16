#ifndef PRODUCE_H
#define PRODUCE_H

#include <string>
using namespace std;

class Produce{
    protected:
    string name;        //<do we even need a name?>
    int cost_per_day;   //the cost of upkeep per day
    int selling_price;  //the price that a Produce sells for
    int buying_price;   //the price to buy and plant a Produce

    public:
    //constructors
    Produce();
    //<do we need any constructors in between here?>
    Produce(string newName, int newCost, int newSellPrice, int newBuyPrice);

    //functions
    virtual int getGarbage(); //<bear with me, I think we need this>
    string getName();   //<removed virtual>
    int getCostPerDay();
    int getSellingPrice();
    int getBuyingPrice();
    void setSellingPrice(int newSellPrice);
    //virtual ProduceType get_type() const = 0;

    //destructor    

};


#endif