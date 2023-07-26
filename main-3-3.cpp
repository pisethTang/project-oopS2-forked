#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

int main() {

    //initialise variables
    int n = 0;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The array is's weighted average is 0.\n";
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
        cout << "The weighted average is: " << weighted_average(array,n) << "\n";

        delete array;
        return 0;
    }
}