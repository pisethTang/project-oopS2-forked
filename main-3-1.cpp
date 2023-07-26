//this script uses the is_fanarray function to determine if an array is in a fan shape

#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main(){

    //initialise variables
    int n = 0;
    bool true_or_false;

    //finding n
    cout << "How long is the array? ";
    cin >> n;

    //case of n < 1
     if (n < 1){
        cout << "The array is not in a fan shape.\n";
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
        true_or_false = is_fanarray(array,n);

        if (true_or_false == true){
            cout << "This array is in a fan shape.\n";
        }
        else {
            cout << "This array is not in a fan shape.\n";
        }

        delete array;

        return true_or_false;

    }
}