//this function takes a pointer and makes the value in the pointer 42

#include <iostream>
using namespace std;

void changeValue(double* num){

    *num = 42;

    return;
}

int main(){

    //initialise variables
    double a;
    double *num;

    //find number
    cout << "Please input a number: ";
    cin >> a;
    cout << "The number is " << a << "\n";

    num = &a;

    //using function
    changeValue(num);

    //printing value
    cout << "The number is " << a << "\n";

    return 0;
}