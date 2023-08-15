#include <iostream>
using namespace std;

extern int* readNumbers();
extern void printNumbers(int* ptr);

int main() {

    //initialise variables
    int *ptr = readNumbers();

    printNumbers(ptr);

    delete[] ptr;

    return 0;
}