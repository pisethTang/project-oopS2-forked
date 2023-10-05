#include "Textbased.h"
#include "Wheat.h"
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"

// Constructor with a title parameter
Textbased::Textbased(const std::string& title) : title(title) {}

// Function to get title
std::string Textbased::getTitle(){
    return title;
}

// Function to display the menu
void Textbased::displayMenu() {
    std::cout << "Day " << farm.getDayNum() << " | ";

    switch (farm.getTimeOfDay()) {
        case 0:
            std::cout << "Morning";
        break;
        case 1:
            std::cout << "Midday";
        break;
        case 2:
            std::cout << "Afternoon";
        break;
        default:
            std::cout << "this text should not appear.";
        break;
    }

    std::cout << " | You have $" << farm.getMoney() << " | Goal: $10000\n\n";

    std::cout << "What would you like to do?\n";
    std::cout << "1. Shop Produce\n";
    std::cout << "2. Buy Upgrades or Land (" << farm.getCurrentLand() << "/" << farm.getMaxLand() << " land)\n";
    std::cout << "3. Sell/Harvest Animals/Crops\n";
    std::cout << "4. See explanation\n";

    return;
}

// Function to display the Farmland array
void Textbased::displayFarmland() {
    cout << " _______________________________________________________________________________\n";

    //top row
    for (int i = 0; i < 10; i++) {
        cout << "|" << farm.getTopRow(i);
    }
    cout << "|\n";

    //middle row
    for (int i = 0; i < 10; i++) {
        cout << "|" << farm.getMiddleRow(i);
    }
    cout << "|\n";

    //bottom row
    for (int i = 0; i < 10; i++) {
        cout << "|" << farm.getBottomRow(i);
    }
    cout << "|\n";

    cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";

    return;
}

void Textbased::displayExplanation(){
    std::cout << "\nYou own a farm and begin with $1000. The goal is to get to $10000, and you\n";  //<change this if money changes>
    std::cout << "lose if you run out of money.\n";
    std::cout << "The table represents your farmland. You start with 2 and can have a maximum of 10.\n";
    std::cout << "Once you have planted things, they will appear on the table. The top row\n";
    std::cout << "shows what is planted, the middle row shows how much you can sell it for\n";
    std::cout << "(which may change as the crops grow), and the bottom row has the growth percentage\n";
    std::cout << "of the crops, or the amount of money you recieve each day from selling the animal\n";
    std::cout << "products (such as eggs, etc.).\n\nGood luck!\n\n";

    return;
}

// Function to get user choice
int Textbased::getUserChoice() {
    int choice;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;
    return choice;
}

// Function to shop for produce
void Textbased::shopProduce(){  //<can we make this easier?>
    Wheat a;
    Produce* ptr1 = &a;
    int choice;

    cout << "       Wheat   Carrots Potato  Chicken Cows    Sheep \n";
    cout << "cost   " << ptr1->getBuyingPrice() << "      ";    //Wheat

    Carrots b;
    ptr1 = &a;
    cout << ptr1->getBuyingPrice() << "      "; //Carrots

    Potatoes c;
    ptr1 = &c;
    cout << ptr1->getBuyingPrice() << "      "; //Potatoes

    Chickens d;
    ptr1 = &d;
    cout << ptr1->getBuyingPrice() << "     "; //Chickens

    Cows e;
    ptr1 = &e;
    cout << ptr1->getBuyingPrice() << "     "; //Cows

    Sheep f;
    ptr1 = &f;
    cout << ptr1->getBuyingPrice() << "\n"; //Sheep

    //<add stuff about cost efficiency>

    cout << "What is your choice? (1-6): ";
    cin >> choice;
    cout << "\n";

    farm.plantProduce(choice);

    return;

}

void Textbased::shopUpgrades(){
   
   int choice;
   
    //displaying options
    cout << "       Soil Upgrade    Food Upgrade    More Farmland\n";
    cout << "cost   $1500           $1500           $1000\n";   //<choose the prices>
    cout << "info   crops grow      more $/day\n";
    cout << "       faster\n";
    cout << "What is your choice? (1-3): ";
    cin >> choice;
    cout << "\n";

    //determining based on answer
    switch(choice){
        case 1:
            if (farm.getMoney() >= 1500){
                farm.setMoney(farm.getMoney() - 1500);
                farm.setGoodSoil(1);

                farm.moveTime();
            }
            else {
                cout << "Not enough money!\n\n";    //<check that this is the right amount of \ns>
            }
        break;
        case 2:
            if (farm.getMoney() >= 1500){
                farm.setMoney(farm.getMoney() - 1500);
                farm.setGoodFood(1);

                farm.moveTime();
            }
            else {
                cout << "Not enough money!\n\n";    //<check that this is the right amount of \ns>
            }
        break;
        case 3:
            if (farm.getMoney() >= 1000){
                farm.setMoney(farm.getMoney() - 1000);
                farm.setMiddleRow(farm.getCurrentLand(), "       ");
                farm.setCurrentLand(farm.getCurrentLand() + 1);

                farm.moveTime();
            }
            else {
                cout << "Not enough money!\n\n";    //<check that this is the right amount of \ns>
            }
        break;
        default:   
            cout << "Invalid input.\n\n";
        break;
    }

    return;
}

// Function to execute the chosen action
void Textbased::executeAction(int choice){
    switch (choice) {
        case 1:
            std::cout << "\nYou chose to Shop Produce.\n";
            shopProduce();

            break;

        case 2:
            std::cout << "\nYou chose to Buy Upgrades or Lands.\n";
            shopUpgrades();

            break;

        case 3:
            std::cout << "\nYou chose to Sell/Harvest Animals/Crops.\n";
            // Add code for selling/harvesting animals/crops

            break;

        case 4:
            displayExplanation();
            break;

        default:
            std::cout << "\nInvalid choice. Please enter a number between 1 and 3.\n";
            exit(0);
    }

    return;
}

// Function to start the game loop
void Textbased::startGame() {
    //display title
    std::cout << "-----------------------------\n";
    std::cout << "      " << getTitle() << "      \n";
    std::cout << "-----------------------------\n";

    while (1) {
        displayFarmland();
        displayMenu();         // Display the menu
        int choice = getUserChoice();  // Get user choice
        executeAction(choice); // Execute the chosen action
    }

    return;
}

// empty lot
//  _______________________________________________________________________________
// |       |       |       |       |       |       |       |       |       |       |
// |       |       |   X   |   X   |   X   |   X   |   X   |   X   |   X   |   X   |
// |       |       |       |       |       |       |       |       |       |       |
//  ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

//  _______________________________________________________________________________
// |Carrots|Potato | Wheat | Sheep | Cows  |Chicken|       |       |       |       |
// |  $16  |  $50  |  $75  | $150  | $170  | $130  |   X   |   X   |   X   |   X   |
// |  15%  | 100%  |  75%  | $35/d | $40/d | $30/d |       |       |       |       |
//  ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

//list:
//check the values of cost and such appear correct and apply correctly
//continue connecting the front and back
//make a 'back' button in each menu
//make it so you can lose