#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
    private:
    std::string m_instrument;
    int m_experience;

    public:
    //standard constructor
    Musician();

    //constructor
    Musician(std::string instrument, int experience);

    //functions
    std::string get_instrument();
    int get_experience();
    
    void set_musician(Musician new_musician, Musician old_musician);
};

#endif
