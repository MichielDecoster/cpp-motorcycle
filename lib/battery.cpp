#include "battery.h"
#include <iostream>

namespace Vehicles{

    Battery::Battery(double voltage){
        std::cout << "Creating a sick battery to destroy human worlds with a voltage of " << voltage << " Volts" << std::endl;
        this->voltage = voltage;
    };
};
