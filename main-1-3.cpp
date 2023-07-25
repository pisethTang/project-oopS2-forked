//this script uses the num_count function to count the number of elements
//in a given array that are equal to a particular number

#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main(){

    //initialising variables
    int n = 0;
    int number = 0;
    int count = 0;

    //finding n
    cout << "Please input the length of the array: ";
    cin >> n;

    if (n < 1){
        cout << "The number of elements is: 0 \n";
        return 0;
    }

    else {

        //building array
        int* array;
        array = new int[n];

        for (int i = 0; i < n; i = i + 1){
            cout << "Please input an integer for the array: ";
            cin >> array[i];
        }

        //finding number
        cout << "What number would you like to count? ";
        cin >> number;

        //using function
        count = num_count(array,n,number);
        cout << "The count is: " << count << "\n";

        delete array;

        return count;

    }








}