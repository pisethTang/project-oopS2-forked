#include <iostream>
using namespace std;

extern int* readNumbers(int length);
extern void hexDigits(int *numbers,int length);

int main() {

    //initialise variables
    int length;

    //find length
    cout << "How long? ";
    cin >> length;

    //check length
    if (length <= 0) {
        return 0;
    } else if (length > 10) {
        return 0;
    } else {

        int *ptr = readNumbers(length);

        hexDigits(ptr, length);

        delete[] ptr;

        return 0;
    }
}