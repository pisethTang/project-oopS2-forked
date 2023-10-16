#include "Textbased.h"
#include "Wheat.h"
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"
#include <limits>

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
    std::cout << "4. Move time ahead\n";
    std::cout << "5. See explanation\n";
    std::cout << "6. Quit\n";

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

// function to get user's choice
int Textbased::getUserChoice() {
    int choice;

    while (true) {
        try {
            std::cout << "Enter your choice (1-6): ";
            std::cin >> choice;

            if (std::cin.fail()) {
                throw std::runtime_error("Invalid input. Please enter an integer.");
            }

            if (choice < 1 || choice > 6) {
                throw std::out_of_range("Invalid input. Please enter an integer between 1 and 6.");
            }

            // If the input is valid, break out of the loop
            break;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        }
    }

    return choice;
}

// Updated

// Function to shop for produce
void Textbased::shopProduce(){  //<can we make this easier?>
    Wheat* a = new Wheat;
    Produce* ptr1 = a;
    int choice;

    std::cout << "num        1       2       3       4       5       6       7\n";
    std::cout << "type       Wheat   Carrots Potato  Chicken Cows    Sheep   Back to\n";
    std::cout << "cost       " << ptr1->getBuyingPrice() << "      ";    //Wheat

    Carrots* b = new Carrots;
    ptr1 = b;
    std::cout << ptr1->getBuyingPrice() << "      "; //Carrots

    Potatoes* c = new Potatoes;
    ptr1 = c;
    std::cout << ptr1->getBuyingPrice() << "      "; //Potatoes

    Chickens* d = new Chickens;
    ptr1 = d;
    std::cout << ptr1->getBuyingPrice() << "     "; //Chickens

    Cows* e = new Cows;
    ptr1 = e;
    std::cout << ptr1->getBuyingPrice() << "     "; //Cows

    Sheep* f = new Sheep;
    ptr1 = f;
    std::cout << ptr1->getBuyingPrice() << "     "; //Sheep

    std::cout << "Main menu\n";

    std::cout << "daily      15      10      20      10      25      35\n";
    std::cout << "upkeep cost\n";

    //<add stuff about cost efficiency>

    while(true){
    try{
    std::cout << "What is your choice? (1-7): ";
    std::cin >> choice;
    std::cout << "\n";
    if(std::cin.fail()) throw std::runtime_error("Invalid input. Please enter an integer.");
    if (choice < 1 || choice > 7) throw std::out_of_range("Invalid input. Please enter an integer between 1 and 6.");
    if (choice > 0 && choice < 7) farm.plantProduce(choice);

   
    break;
    }catch(std::runtime_error const& e){
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
    }catch(std::out_of_range const& e){
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
    }catch(std::exception const& e){
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
    }

    }
    return;

}

void Textbased::shopUpgrades(){
   
   int choice;
   
    //displaying options
    cout << "num    1               2               3               4\n";
    cout << "       Soil Upgrade    Food Upgrade    More Farmland   Back to main\n";
    cout << "cost   $500            $500            $500            menu\n";   //<choose the prices>
    cout << "info   crops grow      more $/day\n";
    cout << "       faster\n";
    cout << "What is your choice? (1-4): ";
    cin >> choice;
    cout << "\n";

    //determining based on answer
    switch(choice){
        case 1:
            if (farm.getMoney() >= 500){
                farm.setMoney(farm.getMoney() - 500);
                farm.setGoodSoil(1);

                farm.moveTime();
            }
            else {
                cout << "Not enough money!\n\n";    //<check that this is the right amount of \ns>
            }

            break;

        case 2:
            if (farm.getMoney() >= 500){
                farm.setMoney(farm.getMoney() - 500);
                farm.setGoodFood(1);

                farm.moveTime();
            }
            else {
                cout << "Not enough money!\n\n";    //<check that this is the right amount of \ns>
            }

            break;

        case 3:
            if (farm.getMoney() >= 500){
                farm.setMoney(farm.getMoney() - 500);
                farm.setMiddleRow(farm.getCurrentLand(), "       ");
                farm.setCurrentLand(farm.getCurrentLand() + 1);

                farm.moveTime();
            }
            else {
                cout << "Not enough money!\n\n";    //<check that this is the right amount of \ns>
            }

            break;

        case 4:

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
            int index;

            std::cout << "\nYou chose to Sell/Harvest Animals/Crops.\n";
            std::cout << "Which farmland will you harvest/sell? Or, press ";
            std::cout << farm.getCurrentLand() + 1 << " to return: ";
            std::cout << "(1-" << farm.getCurrentLand() + 1 << "): ";
            cin >> index;

            if (index > 0 && index <= farm.getCurrentLand()){
                farm.harvestProduce(index-1);
            }
            else if(index == farm.getCurrentLand() + 1){
                //empty so that no invalid choice notif appears
                cout << "\n";
            } 
            else {
                cout << "Invalid choice!\n\n";
            }

            break;

        case 4:
            //changing time
            std::cout << "\nTo next day!\n\n";
            farm.changeDay();
            break;

        case 5:
            displayExplanation();

            break;

        case 6:
            int quit;

            std::cout << "\nAre you sure you want to quit? Your progress won't be saved.\n";
            std:: cout << "Type 6 again to quit, or any other number to continue: ";
            cin >> quit;
            if (quit == 6){
                exit(0);
            }

            break;

        default:
            std::cout << "\nInvalid choice. Please enter a number between 1 and 6.\n";
    }

    return;
}

// Function to start the game loop
void Textbased::startGame() {
    //variable to determine lose condition
    int netMoney = farm.getMoney();

    //display title
    std::cout << "-----------------------------\n";
    std::cout << "      " << getTitle() << "      \n";
    std::cout << "-----------------------------\n";

    while (1 && farm.getMoney() < 10000 && netMoney > 0) {  //three conditions for game to continue
        displayFarmland();
        displayMenu();         // Display the menu
        int choice = getUserChoice();  // Get user choice
        executeAction(choice); // Execute the chosen action

        //recalculating netMoney every time menu appears
        netMoney = farm.getMoney();

        for (int i = 0; i < farm.getCurrentLand(); i++){
            //determining the amount of money there is that could keep the farm above water
            if (farm.getLands()[i].getEmptyOrUsed() == 1){
                netMoney = netMoney + farm.getLands()[i].getPlanted()->getSellingPrice();
            }
        }

        if(netMoney <= 0){
            std::cout << "You ran out of money. You lose!\n";
        }

        if(netMoney >= 10000){
            std::cout << "You won! Congratulations!\n";
        }
    }

    return;
}

//list:
//go through all <>
//check that all functions are used
//selling things causes massive problems
//check weird time jump ot day 4 bug