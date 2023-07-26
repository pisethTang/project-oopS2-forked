//this function takes in an array, the size of the array, and a number
//and returns the amount of elements in the array that are equal
//to the number

#include <iostream>
using namespace std;

int num_count(int array[], int n, int number){

    //initialise variables
    int count = 0;

    //checking for n < 1
    if (n < 1) {
        return 0;
    }

    else {

        //count
        for (int i = 0; i < n; i++){
            if (array[i] == number){
                count = count + 1;
            }
        }

        return count;

    }

}