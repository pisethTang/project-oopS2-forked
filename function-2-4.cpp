//this function determines whether a given array is ascending in numbers or not
//and returns a relevant boolean value

#include <iostream>
using namespace std;

bool is_ascending(int array[], int n){

    //initialise variables
    bool true_or_false;
    int value = array[0];
    int i = 0;

    //determine true_or_false
    for (int i = 0; i < n; i++){
        if (array[i] >= value){
            value = array[i];
        }
        else{
            i = n + 10;
        }
    }

    if (i == n + 10){
        true_or_false = false;
    }
    else{
        true_or_false = true;
    }

    return true_or_false;

}