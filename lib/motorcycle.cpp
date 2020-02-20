#include "motorcycle.h"
#include <iostream>

namespace Vehicles{

    //Explicit call to constructor Battery(double) using
    //constructor initialization list
    // Motorcycle::Motorcycle(void)
    // : battery(12.0), motor (900) {
    //     std::cout << "Constructing motorcycle" << std::endl;
    // }

    //Constructor reuse
    Motorcycle::Motorcycle(void)
    : Motorcycle(12.0, 900){
    }

    Motorcycle::Motorcycle(double voltage, int capacity)
    :battery(voltage), motor(capacity){
    std::cout << "Constructing motorcycle" << std::endl;

    }
    
}