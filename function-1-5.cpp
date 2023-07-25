//this function counts the number of even numbers between 1 and a number supplied

#include <iostream>
using namespace std;

int count_evens(int number){

    //initialising
    int count = 0;

    //finding the even count
    if(number % 2 == 0){
        count = number / 2;
    }
    else {
        //finding the odd count
        number = number - 1;
        count = number / 2;
    }

    return count;

}