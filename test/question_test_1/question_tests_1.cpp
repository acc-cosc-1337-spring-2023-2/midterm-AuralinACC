#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get cookie ingredients")
{
	vector<double> expected = { 1.5, 1.0, 2.75 };
    REQUIRE(get_cookie_ingredients(48) == expected);
	
	expected = { 3.0, 2.0, 5.5 };
	REQUIRE(get_cookie_ingredients(96) == expected);
	
	expected = { 0.75, 0.5, 1.375 };
	REQUIRE(get_cookie_ingredients(24) == expected);
}