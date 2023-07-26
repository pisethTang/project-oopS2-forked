#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {

    //initialising
    int n;
    int sum;

    //finding n
    cout << "Please input the length of the array: ";
    cin >> n;

    //building array
    int* array;
    array = new int[n];

    int* secondarray;
    secondarray = new int[n];

    for (int i = 0; i < n; i = i + 1){
        cout << "Please input an integer for the array: ";
        cin >> array[i];
    }

    for (int i = 0; i < n; i = i + 1){
        cout << "Please input an integer for the second array: ";
        cin >> secondarray[i];
    }

    //using the function
    sum = sum_two_arrays(array,secondarray,n);
    cout << "The sum is: " << sum << "\n";
    
    delete array;
    delete secondarray;
    return 0;
}