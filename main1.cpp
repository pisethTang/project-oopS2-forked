#include <iostream>
using namespace std;

extern string transform(int n);

int main(){

    //initialise variables
    int n;
    string binary;

    //get number
    cout << "What number do you want to turn to binary? ";
    cin >> n;

    //using function
    binary = transform(n);

    cout << "The binary number is: " << binary << "\n";

    return 0;
}