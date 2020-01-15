#include <catch.hpp>

#include  <EightKyu.h>

using namespace  CodeWarsCpp;


SCENARIO("Testing Digitize ", "[EightKyu]") {

	auto [a,  expected] = GENERATE(table<int, std::vector<int>>({
		 {348597,    { 7, 9, 5, 8, 4, 3 }},
	
		}));

	GIVEN("Inputs") {
		THEN("The expected result is calculated") {

			auto result = EightKyu::digitize(a);

			CHECK(result == expected);
		}
	}

}


SCENARIO("Testing expressionsMatter small values", "[EightKyu]") {

	auto [a, b, c, expected] = GENERATE(table<int, int, int, int>({
	     {1,    3,    1,   5},
	     {2,    1,    1,   4},
	     {1,    1,    1,   3},
		 {1,    2,    3,   9},
		 {2,    2,    2,   8},
		 {2,    1,    2,   6},
		}));

	GIVEN("Inputs") {
		THEN("The expected result is calculated") {

			auto result = EightKyu::expressionsMatter(a, b, c);
			
			CHECK(result == expected);
		}
	}

}

SCENARIO("Testing expressionsMatter intermediate values", "[EightKyu]") {

	auto [a, b, c, expected] = GENERATE(table<int, int, int, int>({
		 {5,    1,    3,   20},
		 {3,    5,    7,   105},
		 {5,    6,    1,   35},
		 {1,    6,    1,   8},
		 {2,    6,    1,   14},
		 {6,    7,    1,   48},
		}));

	GIVEN("Inputs") {
		THEN("The expected result is calculated") {

			auto result = EightKyu::expressionsMatter(a, b, c);

			CHECK(result == expected);
		}
	}

}