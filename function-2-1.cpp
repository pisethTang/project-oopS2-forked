#include <iostream>
using namespace std;

int* readNumbers(int length){

    //initialise variables
    int* ptr = new int[length];

    //make array
    for (int i = 0; i < length; i++){
        cout << "What number? ";
        cin >> ptr[i];
    }

    //return pointer
    return ptr;

}

void hexDigits(int *numbers,int length){

    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i];

        switch (numbers[i]){
            case 1:
                cout << " 1 \n";
            break;
            case 2:
                cout << " 2 \n";
            break;
            case 3:
                cout << " 3 \n";
            break;
            case 4:
                cout << " 4 \n";
            break;
            case 5:
                cout << " 5 \n";
            break;
            case 6:
                cout << " 6 \n";
            break;
            case 7:
                cout << " 7 \n";
            break;
            case 8:
                cout << " 8 \n";
            break;
            case 9:
                cout << " 9 \n";
            break;
            case 10:
                cout << " A \n";
            break;
            case 11:
                cout << " B \n";
            break;
            case 12:
                cout << " C \n";
            break;
            case 13:
                cout << " D \n";
            break;
            case 14:
                cout << " E \n";
            break;
            case 15:
                cout << " F \n";
            break;
            default:
                cout << "\n";
            break;
        }

    }

    return;

}