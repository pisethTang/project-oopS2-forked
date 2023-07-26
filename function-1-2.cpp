//this function takes an array and the number of elements in an array
//and returns the average of the elements in the array

#include <iostream>
using namespace std;

double array_mean(int array[], int n){

    //initialise variables
    double sum = 0;
    double average = 0;

    //check for n < 1
    if (n < 1) {
        return 0;
    }

    //rest of n's
    else {
        for (int i = 0; i < n; i++){
            sum = sum + double(array[i]);
        }

        average = sum / (double)n;

        return average;
    }

}