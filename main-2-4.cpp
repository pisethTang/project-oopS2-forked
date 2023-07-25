//this program uses the function is_ascending to determine if a given function
//is ascending or not

#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {

    //initialise variables
    int n = 0;
    bool true_or_false;

     //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The array is neither ascending nor descending.\n";
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
        true_or_false = is_ascending(array,n);
        cout << "Is the array ascending? ";
        if (true_or_false == true){
            cout << "Yes.\n";
        }
        else {
            cout << "No.\n";
        }

        //cleaning up
        delete array;

        return 0;
    }

}