//this function determines whether a given array is descending in numbers or not
//and returns a relevant boolean value

#include <iostream>
using namespace std;

bool is_descending(int array[], int n){

    //initialise variables
    bool true_or_false;
    int value = array[0];
    int j = 0;

    //check for n < 1
    if (n < 1) {
        return 0;
    }

    //rest of n's
    else {

        //determine true_or_false
        for (int i = 0; i < n; i++){
            if (array[i] <= value){
                value = array[i];
            }
            else{
                i = n + 10;
                j = n + 10;
            }
        }

        if (j == n + 10){
            true_or_false = false;
        }
        else{
            true_or_false = true;
        }

        return true_or_false;
        
    }

}