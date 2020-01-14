#include <cstdint>
#include "FuelDistCalc.h"


namespace FuelDistCalcs
{

    bool FuelDistCalc::zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
    {

        uint32_t  dist = fuel_left * mpg;
        bool result = dist >= distance_to_pump ? true : false;
        return result;
    }

}