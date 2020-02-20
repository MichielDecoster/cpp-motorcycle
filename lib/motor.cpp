#include "motor.h"
#include <iostream>

namespace Vehicles{

    Motor::Motor(void){
        std::cout << "Constructing motor with a capacity of " << std::endl;
    }

    Motor::Motor(int capacity){
        std::cout << "Constructing motor with a capacity of " << capacity << " cc's" << std::endl;
        this->capacity = capacity;
    }
    

}