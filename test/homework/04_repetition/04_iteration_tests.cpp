#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify factorial")
{
	REQUIRE(6 == factorial(3));
	REQUIRE(120 == factorial(5));
	REQUIRE(720 == factorial(6));
}

TEST_CASE("Verify GCD")
{
	REQUIRE(5 == gcd(15,5));
	REQUIRE(7 == gcd(21,28));
	REQUIRE(25 == gcd(25,100));
}

