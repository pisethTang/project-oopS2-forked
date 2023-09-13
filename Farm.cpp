#include "Farm.h"

Farm::Farm(std::string name){
    this -> name = name;
}

Farm::Farm()
    :Farm(""){};

//setters
void Farm::set_farm_name(std::string name){
    this ->name =  name;
}

std::string Farm::get_farm_name(){
    return name;
}
