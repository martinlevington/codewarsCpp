#include "EightKyuTest.h"
#include <catch.hpp>

#include  <EightKyu.h>

using namespace  CodeWarsCpp;


TEST_CASE("Digitize Tests tests", "[zero_fuel]") {

	std::vector<int> expected_result = { 7, 9, 5, 8, 4, 3 };
    REQUIRE(EightKyu::digitize(348597) == expected_result);
}