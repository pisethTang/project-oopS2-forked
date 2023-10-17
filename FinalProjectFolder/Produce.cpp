#include "Produce.h"
#include <string>

using namespace std;

//constructors
Produce::Produce(){
    name = "";
    cost_per_day = 0;
    selling_price = 0;
    buying_price = 0;
}

Produce::Produce(string new_name, int new_cost, int new_sell_price, int new_buy_price){
    name = new_name;
    cost_per_day = new_cost;
    selling_price = new_sell_price;
    buying_price = new_buy_price;
}

//functions
string Produce::getName(){
    return name;
}

int Produce::getCostPerDay(){
    return cost_per_day;
}

int Produce::getSellingPrice(){
    return selling_price;
}

int Produce::getBuyingPrice(){
    return buying_price;
}

void Produce::setSellingPrice(int new_sell_price){
    selling_price = selling_price + new_sell_price;
}

int Produce::getGarbage(){
    return 0;
}