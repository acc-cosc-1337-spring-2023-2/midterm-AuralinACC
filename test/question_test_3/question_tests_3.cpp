#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Tests is prime")
{
	REQUIRE(is_prime(19) == true);
	REQUIRE(is_prime(20) == false);
}

TEST_CASE("Test get primes")
{
	vector<int> expected = { 2, 3, 5, 7 };
	REQUIRE(get_primes(10) == expected);

	expected = { 2, 3, 5, 7, 11, 13 };
	REQUIRE(get_primes(15) == expected);

	expected = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	REQUIRE(get_primes(30) == expected);

	expected = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(get_primes(50) == expected);
}