#ifndef PRODUCE_H
#define PRODUCE_H

#include <string>
using namespace std;

class Produce{
    protected:
    string name;
    int cost_per_day;   //the cost of upkeep per day
    int selling_price;  //the price that a Produce sells for
    int buying_price;   //the price to buy and plant a Produce

    public:
    //constructors
    Produce();
    Produce(string new_name, int new_cost, int new_sell_price, int new_buy_price);

    //functions
    virtual int getGarbage();
    string getName();
    int getCostPerDay();
    int getSellingPrice();
    int getBuyingPrice();
    void setSellingPrice(int new_sell_price);

    //destructor    

};


#endif