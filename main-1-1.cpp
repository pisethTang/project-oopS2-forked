#include <iostream>
#include "Vehicle.h"

using namespace std;

int main(){

    //initialise varibles
    int num;
    int response;

    //ask user
    cout << "How many vehicles? ";
    cin >> num;

    //make vector and fill it
    Vehicle* k = new Vehicle[num];
    
    for (int i = 0; i < num; i++){
        cout << "What vehicle type? 1 for car, 2 for bus, 3 for motorbike. ";
        cin >> response;

        switch(response){
            case 1:
                k[i] = Car();
            break;
            case 2:
                k[i] = Bus();
            break;
            case 3:
                k[i] = Motorbike();
            break;
            default:
                i = i - 1;
        }
    }

    //use functions
    for (int i = 0; i < num; i++){
        cout << i << ": " << k[i].getTimeOfEntry() <<"\n"; //this is returning insane values??

        //test line
        cout << "Testing: ";
        k[i].getTimeOfEntry();
        cout << "\n\n";
    }

}