#include "Textbased.h" //Seth: including iostream (input-output stream) is not necessary as 
                       //TextBased.h already did that for us
#include "superTest.h"


int main(){
    // NOTE: Testing has been moved to another file called test.cpp
    // Run our game/simulator
    Textbased game("Farming Simulator");
    game.startGame();

    return 0;
}
