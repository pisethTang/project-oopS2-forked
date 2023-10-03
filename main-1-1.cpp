//eventually a bunch of header files
// #include "Farm.h"
#include <iostream>

using namespace std;

int main(){
    //Farm f1("Our Farm");
    //cout << f1.getName() << "\n";

    // // has to do with the UI window
    // Farm f2("Farm test");
    // f2.run();
    
    //List of problems:
// Dependency between Land.h and Farm.h
// Land.cpp: harvestProduce() requires access to Farm.h’s money variable
// Land.cpp: plantProduce() requires access to Farm.h’s money variable
// Perhaps putting planting and harvesting in Farm.h?
// Land.cpp: plantProduce() has a line which may not work, turning a Produce into each of the 6 sub-sub-classes
// Not using the Crops or Animals sub-classes
// Farm.cpp: changeDay() requires being able to access Animals.h specific stuff. To alleviate this I tried to replace the Produce planted variable in Land.h with two different variables, a Crops and an Animals variable, and then have equivalents of the bool empty_or_used so that there isn’t anything going wrong, but because those two classes are pure abstract classes, they cannot exist. So unsure on how to access these specific functions?



    return 0;
}