//this function takes an array and its length and returns the weighted average of that array

#include <iostream>
using namespace std;

double weighted_average(int array[], int n){

    //initialise variables
    int count = 0;
    double average;

    //if n < 1
    if (n < 1) {
        return 0;
    }

    //if n >= 1
    else {
        //calculating the average
        for (int i = 0; i < n; i++){
            count = 0;

            //counting each number
            for (int j = 0; j < n; j++){
                if (array[i] == array[j]){
                    count = count + 1;
                }
            }

            //adding to the average
            average = average + ((double(array[i]) * double(count)) / double(n));

        }

        return average;
    }
}