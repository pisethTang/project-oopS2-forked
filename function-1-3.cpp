//this function counts the number each number 0-9 appears in a given matrix

#include <iostream>
using namespace std;

void count_digits(int array[4][4]){

    //initialise variables
    int zeroes = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    int sevens = 0;
    int eights = 0;
    int nines = 0;

    //iterate the values
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){

            switch (array[i][j]){
                case 0:
                zeroes++;
                break;

                case 1:
                ones++;
                break;

                case 2:
                twos++;
                break;

                case 3:
                threes++;
                break;

                case 4:
                fours++;
                break;

                case 5:
                fives++;
                break;

                case 6:
                sixes++;
                break;

                case 7:
                sevens++;
                break;

                case 8:
                eights++;
                break;

                case 9:
                nines++;
                break;

            }
        }
    }

    //print values
    cout << "0:" << zeroes << ";1:" << ones << ";2:" << twos << ";3:" << threes;
    cout << ";4:" << fours << ";5:" << fives << ";6:" << sixes << ";7:" << sevens;
    cout << ";8:" << eights << ";9:" << nines << ";\n";

    return;
}