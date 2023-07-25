//this script uses the min_element function to find the smallest element in a given array

#include <iostream>
using namespace std;

extern int min_element(int array[], int n);

int main() {

    //initialising variables
    int n = 0;
    int min_num = 0;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The minimum number is: 0 \n";
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

        //using function
        min_num = min_element(array,n);

        //printing
        cout << "The minimum element in this array is: " << min_num << "\n";

        //cleaning up
        delete array;
        return min_num;

    }

}