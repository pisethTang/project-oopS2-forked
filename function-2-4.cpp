#include <iostream>
using namespace std;

//this function returns the minimum value in a given array
int array_min(int integers[], int length){

    //initialise variables
    int min = integers[0];

    //determine minimum
    for (int i = 1; i < length; i++){
        if (min > integers[i]){
            min = integers[i];
        }
    }

    return min;

}

//this function returns the maximum value in a given array
int array_max(int integers[], int length){

    //initialise variables
    int max = integers[0];

    //determine minimum
    for (int i = 1; i < length; i++){
        if (max < integers[i]){
            max = integers[i];
        }
    }

    return max;

}

//this function sums the maximum and minimum of a given array
int sum_min_max(int integers[], int length){

    //if length bad
    if (length <= 0){
        return 0;
    }
    //if length good
    else {

        //initialise variables
        int sum = 0;
        int min = array_min(integers,length);
        int max = array_max(integers,length);

        //find sum
        sum = min + max;

        return sum;
    }

}