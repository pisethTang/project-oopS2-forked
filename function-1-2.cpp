//this function takes an array and the number of elements in an array
//and returns the average of the elements in the array

#include <iostream>
using namespace std;

double array_mean(int array[], int n){

    //initialise variables
    double sum = 0;
    double average = 0;

    for (int i = 0; i < n; i++){
        sum = sum + array[i];
    }

    average = sum / (double)n;

    cout << "average is " << average << "\n";

    return average;

}