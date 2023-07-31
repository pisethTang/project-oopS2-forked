//this function takes in an array and returns a 1 or a 0 depending on whether it's a palindrome

#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length){

    //initialise variables
    bool palindrome = 0;
    int false_counter = 0;

    //even length
    if (length % 2 == 0){
        for (int i = 0; i < (length / 2); i++){
            if (integers[i] != integers[length - 1 - i]){
                false_counter++;
            }
        }
    }

    //odd length
    else {
        for (int i = 0; i < ((length - 1) / 2); i++){
            if (integers[i] != integers[length - 1 - i]){
                false_counter++;
            }
        }
    }

    //determining bool
    if (false_counter == 0){
        palindrome = 1;
    }

    return palindrome;

}

//this function sums the elements of an array

int sum_array_elements(int integers[], int length){

    //initialise variables
    int sum = 0;

    //make sum
    for (int i = 0; i < length; i++){
        sum = sum + integers[i];
    }

    return sum;

}

//this function takes an integer array and a length, and returns the sum if it is a palindrome

int sum_if_palindrome(int integers[], int length){

    //initialise variables
    int sum = 0;
    
    //bad length
    if (length <= 0){
        return -1;
    }
    
    //good length!
    else {

        //intialise variables
        bool palindrome = is_palindrome(integers,length);

        //if not palindrome
        if (palindrome == 0) {
            return -2;
        }

        //if palindrome!
        else {
            sum = sum_array_elements(integers,length);
        }

    }

    return sum;

}