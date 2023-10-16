#include "Farm.h"
#include "Wheat.h"  //<curious no animals>
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"
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
void Farm::setDayNum(int new_day){
    day_num = new_day;
    return;
}

void Farm::setTimeOfDay(int new_time){   //<can someone please check through the logic of this for me?>
                                        //<also, perhaps we don't need this function at all?>

    switch(new_time) {
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

    // if (new_time >= 0 && new_time < 3){
    //     time_of_day = new_time;
    // }
    // else if (new_time == 3){
    //     changeDay();
    // }
    // else {
    //     cout << "Time invalid!\n"; //<>
    // }
    
    return;
}

void Farm::setMoney(int new_money){
    money = new_money;
    return;
}

void Farm::setCurrentLand(int new_land){
    current_land = new_land;
    return;
}

void Farm::setGoodSoil(bool new_soil){
    has_good_soil = new_soil;
    return;
}

void Farm::setGoodFood(bool new_food){
    has_good_food = new_food;
    return;
}

void Farm::setTopRow(int i, std::string new_string){
    top_row[i] = new_string;
}

void Farm::setMiddleRow(int i, std::string new_string){
    middle_row[i] = new_string;
}

void Farm::setBottomRow(int i, std::string new_string){
    bottom_row[i] = new_string;
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

            // Animals* animal2 = dynamic_cast<Animals*>(ptr);

            // if (animal2 != nullptr) {
            //     std::cout << "animal2 is not a nullptr\n";
            // }
            // if (animal2 == nullptr) {
            //     std::cout << "animal2 is a nullptr\n";
            // }

            if (lands[i].getPlanted()->getName() == "animal"){
                std::cout << "animal win\n";

                Animals* animal = static_cast<Animals*>(ptr);

                //<segmentation fault>
                lands[i].setProduce(animal);
                std::cout << "Produce set\n";

                setMoney(getMoney() + animal->getValuePerDay(getHasGoodFood(), getDayNum()));
                std::cout << "Money set\n";
            }
            if (lands[i].getPlanted()->getName() == "crop"){
                std::cout << "crop win\n";

                Crops* crop = dynamic_cast<Crops*>(ptr);

                if (crop != nullptr){
                    std::cout << "Not a nullptr!\n";
                }
                else {
                    std::cout << "A nullptr :(\n";
                }

                //<get name and getgrowthstage both work>
                //gethasgoodsoil works, as does getdaynum>
                //<getgrowthspeed doesn't work>
                // crop->setGrowthStage(5);
                // std::cout << crop->getGrowthStage() << "\n";   //<not a segmentation fault?>
                // std::cout << "Get to line 222\n";
                // //<setGrowthStage and getGrowthStage both work>
                // //<segmentation fault>

                // crop->setGrowthStage(crop->getGrowthStage() + crop->getGrowthSpeed(getHasGoodSoil(), getDayNum()));
                // lands[i].setProduce(*crop);
            }

            //<more attempts>
            // if (animals->getName() == "animal"){    //<neither of these appear> <segmentation fault>
            //     std::cout << "let's fuckin goooo animal eition index " << i << "\n";

            //     // setMoney(getMoney() + animals->getValuePerDay(getHasGoodFood(), getDayNum()));
            //     // lands[i].setProduce(*animals);  //<check that this works>

            //     // //changing the visual array
            //     // if(animals->getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
            //     //     setBottomRow(i, "  $" + to_string(animals->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
            //     // }
            //     // else{
            //     //     setBottomRow(i, " $" + to_string(animals->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
            //     // }
            // }

            // if (animals->getName() == "crop"){
            //     std::cout << "let's fuckin goooo crop edition index " << i << "\n";
            // }

            std::cout << "got to line 218\n";   //<appears!!>


            // if (animals != nullptr){
            //     setMoney(getMoney() + animals->getValuePerDay(getHasGoodFood(), getDayNum()));
            //     lands[i].setProduce(*animals);  //<check that this works>

            //     //changing the visual array
            //     if(animals->getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
            //         setBottomRow(i, "  $" + to_string(animals->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
            //     }
            //     else{
            //         setBottomRow(i, " $" + to_string(animals->getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
            //     }
            // }
        }
    }

    //iterating through land vector, checking each type and growing crops
    for (int i = 0; i < max_land; i++){
        if (lands[i].getEmptyOrUsed() == 1){
            
            //Produce& b = lands[i].getPlanted();
            Produce* ptr = lands[i].getPlanted();
            Crops* crops = dynamic_cast<Crops*>(ptr);

            if (crops != nullptr){
                //if this element is a crop, increase the growth stage by the growth speed
                crops->setGrowthStage(crops->getGrowthStage() + crops->getGrowthSpeed(getHasGoodSoil(), getDayNum()));
                lands[i].setProduce(crops);
                std::cout << "Getting to line 225\n"; //<>
                //<the above looks wrong to me, it doesn't look like it updates lands itself>

                //changing the growth stage on the visual array
                if(crops->getGrowthStage() < 10){
                    setBottomRow(i, "  " + to_string(crops->getGrowthStage()) + "%   ");
                }
                else if(crops->getGrowthStage() != 100 && crops->getGrowthStage() > 9){
                    setBottomRow(i, "  " + to_string(crops->getGrowthStage()) + "%  ");
                }
                else{
                    setBottomRow(i, " 100%  ");
                    setMiddleRow(i, " $" + to_string(crops->getSellingPrice()) + "  "); //<check that they all fit>
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

void Farm::plantProduce(int produce_iteration){

    int planting = 0;
    int i = 0;

    while (planting == 0 && i < getCurrentLand()) {

        if (lands[i].getEmptyOrUsed() == 0){    //will only plant if this Land is empty
            planting = 1;   //ending the while loop once an empty plot is found

            //1 is wheat, 2 is carrots, 3 is potatoes, 4 is chickens, 5 is cows, 6 is sheep

            Wheat z;
            Carrots y;
            Potatoes x;
            Chickens w;
            Cows v;
            Sheep u;
            switch (produce_iteration) {
                case 1: //Wheat
                    if (getMoney() >= z.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - z.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Wheat
                        lands[i].setProduce(&z);    //<is this right?>

                        //change visual arrays
                        setTopRow(i, " Wheat ");    //top row

                        if(z.getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(z.getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(z.getSellingPrice()) + "  ");
                        }

                        if(z.getGrowthStage() < 10){
                            setBottomRow(i, "  " + to_string(z.getGrowthStage()) + "%   ");
                        }
                        else if(z.getGrowthStage() != 100 && z.getGrowthStage() > 9){    //bottom row
                            setBottomRow(i, "  " + to_string(z.getGrowthStage()) + "%  ");
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
                    if (getMoney() >= y.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - y.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Carrots
                        lands[i].setProduce(&y);    //<is this right?>

                        //change visual arrays
                        setTopRow(i, "Carrots");    //top row

                        if(y.getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(y.getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(y.getSellingPrice()) + "  ");
                        }

                        if(y.getGrowthStage() < 10){
                            setBottomRow(i, "  " + to_string(y.getGrowthStage()) + "%   ");
                        }
                        else if(y.getGrowthStage() != 100 && y.getGrowthStage() > 9){    //bottom row
                            setBottomRow(i, "  " + to_string(y.getGrowthStage()) + "%  ");
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
                    if (getMoney() >= x.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - x.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Potatoes
                        lands[i].setProduce(&x);    //<is this right?>

                        //change visual arrays
                        setTopRow(i, "Potato ");    //top row

                        if(x.getSellingPrice() < 100){  //middle row
                            setMiddleRow(i, "  $" + to_string(x.getSellingPrice()) + "  ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(x.getSellingPrice()) + "  ");
                        }

                        if(x.getGrowthStage() < 10){
                            setBottomRow(i, "  " + to_string(x.getGrowthStage()) + "%   ");
                        }
                        else if(x.getGrowthStage() != 100 && x.getGrowthStage() > 9){    //bottom row
                            setBottomRow(i, "  " + to_string(x.getGrowthStage()) + "%  ");
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
                    if (getMoney() >= w.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - w.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Chickens
                        lands[i].setProduce(&w);    //<is this right?>

                        //change visual arrays
                        setTopRow(i, "Chicken");    //top row

                        if(w.getSellingPrice() < 100 && w.getSellingPrice() > 9){  //middle row
                            setMiddleRow(i, "  $" + to_string(w.getSellingPrice()) + "  ");
                        }
                        else if (w.getSellingPrice() < 10){
                            setMiddleRow(i, "  $" + to_string(w.getSellingPrice()) + "   ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(w.getSellingPrice()) + "  ");
                        }

                        if(w.getValuePerDay(getHasGoodFood(), getDayNum()) < 10){
                            setBottomRow(i, "  $" + to_string(w.getValuePerDay(getHasGoodFood(), getDayNum())) + "   ");
                        }
                        else if(w.getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
                            setBottomRow(i, "  $" + to_string(w.getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                        else{
                            setBottomRow(i, " $" + to_string(w.getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }

                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 5: //Cows
                    if (getMoney() >= v.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - v.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Cows
                        lands[i].setProduce(&v);    //<is this right?>

                        //change visual arrays
                        setTopRow(i, " Cows  ");    //top row

                        if(v.getSellingPrice() < 100 && v.getSellingPrice() > 9){  //middle row
                            setMiddleRow(i, "  $" + to_string(v.getSellingPrice()) + "  ");
                        }
                        else if (v.getSellingPrice() < 10){
                            setMiddleRow(i, "  $" + to_string(v.getSellingPrice()) + "   ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(v.getSellingPrice()) + "  ");
                        }

                        if(v.getValuePerDay(getHasGoodFood(), getDayNum()) < 10){
                            setBottomRow(i, "  $" + to_string(v.getValuePerDay(getHasGoodFood(), getDayNum())) + "   ");
                        }
                        else if(v.getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
                            setBottomRow(i, "  $" + to_string(v.getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                        else{
                            setBottomRow(i, " $" + to_string(v.getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                    }
                    else {
                        cout << "Not enough money!\n";
                    }

                    break;

                case 6: //Sheep
                    if (getMoney() >= u.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - u.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Sheep
                        lands[i].setProduce(&u);    //<is this right?>

                        //change visual arrays
                        setTopRow(i, " Sheep ");    //top row

                        if(u.getSellingPrice() < 100 && u.getSellingPrice() > 9){  //middle row
                            setMiddleRow(i, "  $" + to_string(u.getSellingPrice()) + "  ");
                        }
                        else if (u.getSellingPrice() < 10){
                            setMiddleRow(i, "  $" + to_string(u.getSellingPrice()) + "   ");
                        }
                        else{
                            setMiddleRow(i, " $" + to_string(u.getSellingPrice()) + "  ");
                        }

                        if(u.getValuePerDay(getHasGoodFood(), getDayNum()) < 10){
                            setBottomRow(i, "  $" + to_string(u.getValuePerDay(getHasGoodFood(), getDayNum())) + "   ");
                        }
                        else if(u.getValuePerDay(getHasGoodFood(), getDayNum()) < 100){    //bottom row
                            setBottomRow(i, "  $" + to_string(u.getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
                        }
                        else{
                            setBottomRow(i, " $" + to_string(u.getValuePerDay(getHasGoodFood(), getDayNum())) + "  ");
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

void Farm::harvestProduce(int index){   //<bug here>
if (lands[index].getEmptyOrUsed() == 1) {
        Produce* produce = lands[index].getPlanted();

        Crops* crops = dynamic_cast<Crops*>(produce);
        Animals* animals = dynamic_cast<Animals*>(produce);

        if (crops != nullptr) {
            setMoney(getMoney() + crops->getSellingPrice());
        } else if (animals != nullptr) {
            setMoney(getMoney() + animals->getSellingPrice());
        }
        //<the above is not giving any money back>

        // Change the visual array
        setTopRow(index, "       ");
        setMiddleRow(index, "       ");
        setBottomRow(index, "       ");

        // Reset the land to be empty
        lands[index].setEmptyOrUsed(0);

        //<something with this function is causing another array to loop more than it should>
    }
}

//destructor
Farm::~Farm(){
    delete[] lands;
}