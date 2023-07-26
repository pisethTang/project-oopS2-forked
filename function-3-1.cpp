//this function determines whether an array is a in a "fan" shape
//and returns the relevant bool value

#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n){

    //initialise variables
    int i = 0;
    int current_num = array[0];
    bool true_or_false;

    //the case for even length
    if (n % 2 == 0){

        //determining that it ascends to the halfway point
        while (i < n / 2){
            if (array[i] >= current_num) {
                current_num = array[i];
            }
            else {
                i = n;
                true_or_false = false;
            }
            i++;
        }

        //determining that the array mirrors, if it passed the ascending test
        if (true_or_false == true) {
            i = 0;
            while (i < n / 2) {
                if (array[i] == array[n - i - 1]){
                    i++;
                    true_or_false = true;
                }
                else {
                    i = n;
                    true_or_false = false;
                }
            }
        }
    }

    //the case for odd length
    else {
        //variables
        i = 0;
        current_num = array[0];

        //determining if it ascends to the center value
        while (i < (n - 1) / 2){
            if (array[i] >= current_num){
                current_num = array[i];
                i++;
            }
            else {
                i = n;
                true_or_false = false;
            }
        }

        //determining if the values on either side of the center value are equal
        if (true_or_false == true){
           
            i = 0;

            while (i < (n - 1) / 2){
                if (array[i] == array[n - i - 1]){
                    i++;
                    true_or_false = true;
                }
                else{
                    i = n;
                    true_or_false = false;
                }
            }
        }
    }

    return true_or_false;

}