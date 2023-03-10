#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Testing that rolls are random and between 1 and 6")
{
    srand(time(0));
    for (int i = 1; i <= 10; i++ )
    {
        int dice_roll = roll_die();
		REQUIRE(dice_roll >= 1);
		REQUIRE(dice_roll <= 6);
    }
}