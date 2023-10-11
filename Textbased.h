#ifndef TEXTBASED_H
#define TEXTBASED_H

#include <iostream>
#include "Farm.h"

class Textbased {
private:
    Farm farm;
    std::string title;

public:
    // Constructor with a title parameter
    Textbased(const std::string& title);

    // Function to get the title
    std::string getTitle();

    // Function to display the menu
    void displayMenu();

    // Function to display the Farmland array
    void displayFarmland();

    // Function to get user choice
    int getUserChoice();

    // Function to shop for produce
    void shopProduce();

    // Function to execute the chosen action
    void executeAction(int choice);

    // Function to start the game loop
    void startGame();
};

#endif