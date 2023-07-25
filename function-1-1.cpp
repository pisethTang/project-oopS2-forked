//this function takes an integer array and the number of elements
//in that array, and returns the sum of all elements in the array

#include <iostream>
using namespace std;

int array_sum(int array[], int n){

    int sum = 0;

    for (int i = 0; i < n; i = i + 1){
        sum = sum + array[i];
    }

    return sum;

}