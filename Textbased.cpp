#include "Textbased.h"

// Constructor with a title parameter
Textbased::Textbased(const std::string& title) : title(title) {}

// Function to get title
std::string Textbased::getTitle(){
    return title;
}

// Function to display the menu
void Textbased::displayMenu() {
    std::cout << "-----------------------------\n";
    std::cout << "      " << getTitle() << "      \n";
    std::cout << "-----------------------------\n";
    std::cout << "What would you like to do? You have $" << farm.getMoney() << ".\n";
    std::cout << "1. Shop Produce\n";
    std::cout << "2. Buy Upgrades or Land (" << farm.getCurrentLand() << "/" << farm.getMaxLand() << " land)\n";
    std::cout << "3. Sell/Harvest Animals/Crops\n";
}

// Function to display the Farmland array
void Textbased::displayFarmland() {
    
}

// Function to get user choice
int Textbased::getUserChoice() {
    int choice;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;
    return choice;
}

// Function to execute the chosen action
void Textbased::executeAction(int choice){
    switch (choice) {
        case 1:
            std::cout << "You chose to Shop Produce.\n";
            // Add code for shopping produce

            break;

        case 2:
            std::cout << "You chose to Buy Upgrades or Lands.\n";
            // Add code for buying upgrades or lands

            break;

        case 3:
            std::cout << "You chose to Sell/Harvest Animals/Crops.\n";
            // Add code for selling/harvesting animals/crops

            break;

        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 3.\n";
            exit(0);
    }
}

// Function to start the game loop
void Textbased::startGame() {
    while (1) {
        displayMenu();         // Display the menu
        int choice = getUserChoice();  // Get user choice
        executeAction(choice); // Execute the chosen action
    }
}

// empty lot
//  _______________________________________________________________________________
// |       |       |       |       |       |       |       |       |       |       |
// |       |       |   X   |   X   |   X   |   X   |   X   |   X   |   X   |   X   |
// |       |       |       |       |       |       |       |       |       |       |
//  ⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺

//  _______________________________________________________________________________
// |Carrots|Potato | Wheat | Sheep | Cows  |Chicken|       |       |       |       |
// |  $16  |  $50  |  $75  | $150  | $170  | $130  |   X   |   X   |   X   |   X   |
// |  15%  | 100%  |  75%  | $35/d | $40/d | $30/d |       |       |       |       |
//  ⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺

//testing