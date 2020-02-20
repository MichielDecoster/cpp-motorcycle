#pragma once

#include "motor.h"
#include "battery.h"

namespace Vehicles {

    class Motorcycle{
        public:
            Motorcycle(void);
            Motorcycle(double voltage, int capacity);

        private:
            Motor motor;
            Battery battery;
    };

}