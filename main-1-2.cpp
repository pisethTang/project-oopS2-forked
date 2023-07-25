//this script takes an set of numbers and uses another function
//to find the average of these numbers

#include <iostream>
#include <iomanip>
using namespace std;

extern int array_mean(int[],int);

int main(){

    //initialising variables
    int length;
    double average;

    //finding length
    cout << "Please input the amount of elements in the array: ";
    cin >> length;

    //if length < 1
    if (length < 1) {

        average = 0.0;
        cout << average << "\n";

        return average;

    }
    else {

        //initialising array
        int* array;
        array = new int[length];

        for (int i = 0; i < length; i = i + 1){
            cout << "Please input an integer for the array: ";
            cin >> array[i];
        }

            //using the function
            average = array_mean(array,length);

            //returning values
            cout << "The average of these numbers is: ";
            cout << setprecision(2) << fixed << average << "\n";

            delete array;
            return average;
    }

}