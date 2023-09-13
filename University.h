#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Course.h"
#include "Gradebook.h"
#include <string>

class University {

    private: 
        std::string name;
        std::string location;
        int max;
        Course* courses;
        int max_num_courses;
        int current_num_courses;
        Gradebook grades;

    public:
        //constructors
        University();
        University(std::string newName, std::string newLocation, int newMax);

        //functions
        void addCourse(int id, std::string name);
        int getMax();
        int getCurrentNum();
        void setCurrentNum(int newNum);

        //~University();
};

#endif