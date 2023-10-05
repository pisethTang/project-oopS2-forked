#include "Textbased.h" //Seth: including iostream (input-output stream) is not necessary as 
                       //TextBased.h already did that for us
#include "superTest.h"


int main(){
    // Seth: <I am still contemplating whether to put the super test object in the main src file.>
    // Context:
    //------------------------------------------------------------------
    // Run all the tests
    // super_test st;
    // st.run_all_tests();
    // std::cout << "Everything turns out great! Enter:";
    // std::cin.get(); (this get() method literally waits for us to enter sth such as a whitespace char, e.g. Enter key), it pauses the program
    // we can think of it like a loading screen...before the game/simulation begins
    // ------------------------------------------------------------------
    // Run our game/simulator
    Textbased game("Farming Simulator");
    game.startGame();

    return 0;
}
