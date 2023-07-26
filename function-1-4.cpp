//this function determines the sum of two arrays

#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n){

    //initialise variables
    int sum = 0;

    //if n < 1
    if (n < 1){
        return 0;
    }

    //n >= 1
    else {
        //finding the sum
        for (int i = 0; i < n; i++){
            sum = sum + array[i] + secondarray[i];
        }

        return sum;
    }

}