#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
    private:
    std::string m_instrument;
    int m_experience;

    public:
    //standard constructor
    Musician(){
        m_instrument = "null";
        m_experience = 0;
    }

    //constructor
    Musician(std::string instrument, int experience){
        m_instrument = instrument;
        m_experience = experience;
    }

    //functions
    std::string get_instrument(){
        return m_instrument;
    }
    int get_experience(){
        return m_experience;
    }
};

#endif
