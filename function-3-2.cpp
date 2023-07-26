//this function takes an array and the length of the array and finds the median of the set of numbers
//thus returning the median

#include <iostream>
using namespace std;

int median_array(int array[], int n){

    //declare variables
    int num_temp;

    //checking if n < 1
    if (n < 1) {
        return 0;
    }

    //checking that the array is odd
    else if (n % 2 == 0) {
        return 0;
    }

    //n >= 1, odd only
    else {

        //sorting
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++) {
                if (array[i] > array[j]){
                    num_temp = array[i];
                    array[i] = array[j];
                    array[j] = num_temp;
                }
            }
        }

        //testing that it sorts properly
        cout << "The sorted array is: ";
        for (int i = 0; i < n; i++){
            cout << array[i] << " ";
        }
        cout << "\n";

        //finding the median
        cout << "The median is: " << array[(n - 1) / 2] << "\n";

        return array[(n - 1) / 2];

    }

}