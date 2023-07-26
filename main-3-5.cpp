#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {

    //initialise variables
    int n = 0;
    double sum;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The sum of the array is 0.\n";
        return 0;
    }

    //case of n >= 1
    else {

        //building array
        double* array;
        array = new double[n];

        for (int i = 0; i < n; i = i + 1){
            cout << "Please input a number for the array: ";
            cin >> array[i];
        }

        //using the function
        sum = sum_even(array,n);
        cout << "The sum of the evens is: " << sum << "\n";

        return 0;
    }
}