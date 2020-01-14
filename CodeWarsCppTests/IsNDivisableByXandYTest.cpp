#include "IsNDivisableByXandYTests.h"
#include <catch.hpp>
#include <IsNDivisableByXandY.h>

using namespace  CodeWarsCpp;

TEST_CASE("isDivisable tests", "[isDivisible]") {


    REQUIRE(IsNDivisableByXandY::isDivisible(3, 1, 3) == true);
}