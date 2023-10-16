#ifndef PRODUCE_H
#define PRODUCE_H

#include <string>
using namespace std;

// enum ProduceType{   //<do we need to do this differently?>
//     animal,
//     crop
// };

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
    Produce(string new_name, int new_cost, int new_sell_price, int new_buy_price);

    //functions
    virtual int getGarbage(); //<bear with me, I think we need this>
    string getName();   //<removed virtual>
    int getCostPerDay();
    int getSellingPrice();
    int getBuyingPrice();
    void setSellingPrice(int new_sell_price);
    //virtual ProduceType get_type() const = 0;

    //destructor    

};


#endif