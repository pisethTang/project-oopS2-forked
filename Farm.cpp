#include "Farm.h"
#include "Wheat.h"
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"  //<perhaps some of these can go?>
#include <iostream>

//constructors
Farm::Farm(){
    //name = "";
    max_land = 10;
    current_land = 2;
    day_num = 1;    //starts at one, goes up
    time_of_day = 0;   //int between 0 and 3, when it hits 3 =>  num_days++
    money = 1000;  //start with 1000, can't be less than zero
    for (int i = 0; i < 10; i++) {
        top_row[i] = "       ";
        bottom_row[i] = "       ";
        if (i == 0 || i == 1) {
            middle_row[i] = "       ";
        }
        else {
            middle_row[i] = "   X   ";
        }
    }

    has_good_soil = false;
    has_good_food = false;
    
    lands = new Farmland[max_land];
}
// getters

int Farm::getDayNum(){
    return day_num;
}

int Farm::getTimeOfDay(){
    return time_of_day;
}

int Farm::getMaxLand(){
    return max_land;
}

int Farm::getCurrentLand(){
    return current_land;
}

int Farm::getMoney(){
    return money;
}

bool Farm::getHasGoodSoil(){
    return has_good_soil;
}

bool Farm::getHasGoodFood(){
    return has_good_food;
}

std::string Farm::getTopRow(int i){
    return top_row[i];
}

std::string Farm::getMiddleRow(int i){
    return middle_row[i];
}

std::string Farm::getBottomRow(int i){
    return bottom_row[i];
}

Farmland* Farm::getLands(){
    return lands;
}

// setters
void Farm::setDayNum(int newDay){
    day_num = newDay;
    return;
}

void Farm::setTimeOfDay(int newTime){   //<can someone please check through the logic of this for me?>
                                        //<also, perhaps we don't need this function at all?>

    switch(newTime) {
        case 0:
            time_of_day = 0;
            changeDay();
            break;
        case 1:
            if (getTimeOfDay() >= 1) {
                changeDay();
            }
            time_of_day = 1;
            break;
        case 2:
            if (getTimeOfDay() >= 2){
                changeDay();
            }
            time_of_day = 2;
            break;
        case 3:
            time_of_day = 3;
            changeDay();
            break;
        default:
            cout << "Time invalid! This shouldn't be seen!\n";
            break;
    }
    
    return;
}

void Farm::setMoney(int newMoney){
    money = newMoney;
    return;
}

void Farm::setCurrentLand(int newLand){
    current_land = newLand;
    return;
}

void Farm::setGoodSoil(bool newSoil){
    has_good_soil = newSoil;
    return;
}

void Farm::setGoodFood(bool newFood){
    has_good_food = newFood;
    return;
}

void Farm::setTopRow(int i, std::string newString){
    top_row[i] = newString;
}

void Farm::setMiddleRow(int i, std::string newString){
    middle_row[i] = newString;
}

void Farm::setBottomRow(int i, std::string newString){
    bottom_row[i] = newString;
}

//functions
void Farm::buyNewLand(){
    if (getMoney() >= 250){  //250 chosen as the price of land

        if((getCurrentLand() + 1) < getMaxLand()){  //ensure not going past max land

            //take away money
            setMoney(getMoney() - 250);

            //change the visual land vector
            setMiddleRow(getCurrentLand(), "       ");

            //add the new land
            setCurrentLand(getCurrentLand() + 1);
        }
    }
}

void Farm::changeDay(){

    //setting the new day number
    setDayNum(getDayNum() + 1);

    //iterating through Land vector, checking each type and affecting money appropriately
    for(int i = 0; i < max_land; i++){
        if (lands[i].getEmptyOrUsed() == 1){
            //<is this going to work??>
            setMoney(getMoney() - lands[i].getPlanted()->getCostPerDay());
            //<bug here where it can cycle through and get 6x the cost per day if things were sold>

            Produce* ptr = lands[i].getPlanted();

            //checking and changing the animals
            if (lands[i].getPlanted()->getName() == "animal"){

                Animals* animal = dynamic_cast<Animals*>(ptr);

                if (animal != nullptr){
                    setMoney(getMoney() + animal->getValuePerDay(getHasGoodFood(), getDayNum()));

                    //changing the visuals
                    if (animal->getValuePerDay(getHasGoodFood(), getDayNum()) < 10){
                        setBottomRow(i,"  $" + to_string(animal->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                    }
                    else if (animal -> getValuePerDay(getHasGoodFood(), getDayNum()) < 100){
                        setBottomRow(i,"  $" + to_string(animal->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                    }
                    else {
                        setBottomRow(i," $" + to_string(animal->getValuePerDay(getHasGoodFood(), getDayNum())) + " ");
                    }
                }
            }

            //checking and changing the crops
            if (lands[i].getPlanted()->getName() == "crop"){
                Crops* crop = dynamic_cast<Crops*>(ptr);

                if (crop != nullptr){
                    //setting growth stage
                    crop->setGrowthStage(crop->getGrowthStage() + crop->getGrowthSpeed(getHasGoodSoil(), getDayNum()));
                    if (crop->getGrowthStage() >= 10){
                        crop->setGrowthStage(10);

                        if (crop->getSellingPrice() < crop->getFutureSellPrice()){
                            crop->setSellingPrice(crop->getFutureSellPrice());
                        }

                        setMiddleRow(i, " $" + to_string(crop->getSellingPrice()) + "  ");
                    }

                    lands[i].setProduce(crop);

                    //changing visuals
                    if (crop->getGrowthStage() == 0){
                        setBottomRow(i, "   0%  ");
                    }
                    else if (crop->getGrowthStage() < 10){
                        setBottomRow(i, "  " + to_string(crop->getGrowthStage()) + "0%  ");
                    }
                    else {
                        setBottomRow(i, " 100%  ");
                    }

                }
                else {
                    cout << "crop nullptr\n";
                }
            }
        }
    }
}

void Farm::moveTime(){  //<put this function in all the other functions>
    setTimeOfDay(getTimeOfDay() + 1);

    if (getTimeOfDay() >= 3){
        setTimeOfDay(0);
        changeDay();
    }
}

void Farm::plantProduce(int produceIteration){

    int planting = 0;
    int i = 0;

    while (planting == 0 && i < getCurrentLand()) {

        if (lands[i].getEmptyOrUsed() == 0){    //will only plant if this Land is empty
            planting = 1;   //ending the while loop once an empty plot is found

            //1 is wheat, 2 is carrots, 3 is potatoes, 4 is chickens, 5 is cows, 6 is sheep
            Wheat* z = new Wheat();
            Carrots* y = new Carrots();
            Potatoes* x = new Potatoes();
            Chickens* w = new Chickens();
            Cows* v = new Cows();
            Sheep* u = new Sheep();

            //<do we need to dynamically allocate these?>

            switch (produceIteration) {
                case 1: //Wheat
                    if (getMoney() >= z->getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - z->getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Wheat
                        lands[i].setProduce(z);

                        //change visual arrays
                        setTopRow(i, " Wheat ");    //top row

                        if(z->getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(z->getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(z->getSellingPrice()) + "  ");
                        }

                        if(z->getGrowthStage() < 10){
                            setBottomRow(i, "  " + to_string(z->getGrowthStage()) + "%   ");
                        }
                        else if(z->getGrowthStage() != 100 && z->getGrowthStage() > 9){    //bottom row
                            setBottomRow(i, "  " + to_string(z->getGrowthStage()) + "%  ");
                        }
                        else{
                            setBottomRow(i, " 100%  ");
                        }
                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 2: //Carrots
                    if (getMoney() >= y->getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - y->getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Carrots
                        lands[i].setProduce(y);

                        //change visual arrays
                        setTopRow(i, "Carrots");    //top row

                        if(y->getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(y->getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(y->getSellingPrice()) + "  ");
                        }

                        if(y->getGrowthStage() < 10){
                            setBottomRow(i, "  " + to_string(y->getGrowthStage()) + "%   ");
                        }
                        else if(y->getGrowthStage() != 100 && y->getGrowthStage() > 9){    //bottom row
                            setBottomRow(i, "  " + to_string(y->getGrowthStage()) + "%  ");
                        }
                        else{
                            setBottomRow(i, " 100%  ");
                        }

                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 3: //Potatoes
                    if (getMoney() >= x->getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - x->getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Potatoes
                        lands[i].setProduce(x);

                        //change visual arrays
                        setTopRow(i, "Potato ");    //top row

                        if(x->getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(x->getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(x->getSellingPrice()) + "  ");
                        }

                        if(x->getGrowthStage() < 10){
                            setBottomRow(i, "  " + to_string(x->getGrowthStage()) + "%   ");
                        }
                        else if(x->getGrowthStage() != 100 && x->getGrowthStage() > 9){    //bottom row
                            setBottomRow(i, "  " + to_string(x->getGrowthStage()) + "%  ");
                        }
                        else{
                            setBottomRow(i, " 100%  ");
                        }

                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 4: //Chickens
                    if (getMoney() >= w->getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - w->getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Chickens
                        lands[i].setProduce(w);

                        //change visual arrays
                        setTopRow(i, "Chicken");    //top row

                        if(w->getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(w->getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(w->getSellingPrice()) + "  ");
                        }

                        if(w->getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
                            setBottomRow(i, "  $" + to_string(w->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                        else{
                            setBottomRow(i, " $" + to_string(w->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }

                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 5: //Cows
                    if (getMoney() >= v->getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - v->getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Cows
                        lands[i].setProduce(v);

                        //change visual arrays
                        setTopRow(i, " Cows  ");    //top row

                        if(v->getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(v->getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(v->getSellingPrice()) + "  ");
                        }

                        if(v->getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
                            setBottomRow(i, "  $" + to_string(v->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                        else{
                            setBottomRow(i, " $" + to_string(v->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 6: //Sheep
                    if (getMoney() >= u->getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - u->getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Sheep
                        lands[i].setProduce(u);

                        //change visual arrays
                        setTopRow(i, " Sheep ");    //top row

                        if(u->getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(u->getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(u->getSellingPrice()) + "  ");
                        }

                        if(u->getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
                            setBottomRow(i, "  $" + to_string(u->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                        else{
                            setBottomRow(i, " $" + to_string(u->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                default:
                    cout << "Invalid selection! This text shouldn't be seen!\n"; //<check that this works>
                    planting = 0;   //planting didn't occur

                    break;
            }

        }

        i++;    //iterating i;

    }

    //moving time if planting occured
    if (planting == 1) {
        moveTime();
    }

    //A notice for if there is no land
    if (planting == 0) {
        std::cout << "No available land.\n";
    }

    return;
}

void Farm::harvestProduce(int index){   //<working now>
if (lands[index].getEmptyOrUsed() == 1) {
        Produce* produce = lands[index].getPlanted();

        Crops* crops = dynamic_cast<Crops*>(produce);
        Animals* animals = dynamic_cast<Animals*>(produce);

        if (crops != nullptr) {
            setMoney(getMoney() + crops->getSellingPrice());
        } else if (animals != nullptr) {
            setMoney(getMoney() + animals->getSellingPrice());
        }

        // Change the visual array
        setTopRow(index, "       ");
        setMiddleRow(index, "       ");
        setBottomRow(index, "       ");

        // Reset the land to be empty
        lands[index].setEmptyOrUsed(false);
    }
}

//destructor
Farm::~Farm(){
    delete[] lands;
}