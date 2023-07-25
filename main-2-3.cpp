//this program uses the function two_five_nine to count the number of twos, fives, and nines in
//a given array

#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);

int main() {

    //initialising variables
    int n = 0;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "2:0;5:0;9:0\n";
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
    two_five_nine(array,n);

    delete array;

    return 0;

    }
}