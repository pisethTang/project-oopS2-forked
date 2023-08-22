#include <iostream>
using namespace std;

#include "Musician.h"

Musician::Musician() {
    m_instrument = "null";
    m_experience = 0;
}

Musician::Musician(std::string instrument, int experience){
    m_instrument = instrument;
    m_experience = experience;
}

string Musician::get_instrument(){
    return m_instrument;
}

int Musician::get_experience(){
    return m_experience;
}