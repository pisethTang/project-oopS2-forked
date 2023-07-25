#include <iostream>
using namespace std;

int main() {

    //initialising
    int n = 0;
    int array[] = {0};

    //finding n
    cout << "Please input the number of elements in the array: ";
    cin >> n;
    cout << "\n";

    //if n<0
    if (n < 1) {
        return 0;
    }
    else {
        for (int i = 0; i < n; ++i){
            cout << "Please input an integer for the array: ";
            cin >> array[i];
        }

        for (int j = 0; j < n; ++j){
            cout << array[j] << " ";
        }
    }


}