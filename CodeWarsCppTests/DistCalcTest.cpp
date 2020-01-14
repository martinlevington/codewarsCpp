
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "External/catch.hpp"

#include <FuelDistCalc.h>

using namespace FuelDistCalcs;


TEST_CASE("zero_fuel tests", "[zero_fuel]") {
 
    REQUIRE(FuelDistCalc::zero_fuel(50, 25, 2) == true);
}