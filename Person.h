#ifndef PERSON_H
#define PERSON_H

using namespace std;

//defining structure
struct Person {
    string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif