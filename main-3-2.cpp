//this script uses the median_array function to find the median of a given array

#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main() {
    
    //initialise variables
    int n = 0;
    int median;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The array is not valid.\n";
        return 0;
    }

    //case of n >= 1
    else {

        //building array
        int* array;
        array = new int[n];

        for (int i = 0; i < n; i = i + 1){
            cout << "Please input an integer for the array: ";
            cin >> array[i];
        }

        //using the function
        median = median_array(array,n);
        cout << "The median is: " << median << "\n";

    return 0;
    
    }
}