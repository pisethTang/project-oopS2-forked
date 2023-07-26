//this function inputs an array and the length of the array and
//returns the sum of all the even numbers

#include <iostream>
using namespace std;

double sum_even(double array[], int n){

    //initialise variables
    double sum = 0;

    //if n < 1
    if (n < 1){
        return 0;
    }

    //if n >= 1
    else {
        //find the sum
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0){
                sum = sum + array[i];
            }
        }

        return sum;
    }
}