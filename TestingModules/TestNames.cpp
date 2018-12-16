//
// Created by cheetos on 15/12/18.
//

#include "../dependencies/catch.h"

/* TEST NAMES: should express a specific requirement/behavior
 * should include:
 *  the starting state
 *  given input
 *  expected result
 *
 *  Names should be easily found
 *  Should not include "Test"*/
TEST_CASE("If Age > 18 IsAdult returns true")
{
// ARRANGE
int i = 0;

// ACT
i++;

// ASSERT
REQUIRE(i == 2);
}

TEST_CASE("<When> called with xyz <then> return true") { REQUIRE(1 == 1); }

TEST_CASE("<Should> throw exception <When> invalid User") { REQUIRE(1 == 1); }

TEST_CASE("<Given> authenticathed <When> invalid number used <Then> transaction will fail") { REQUIRE(1 == 1); }

TEST_CASE("<Called> with empty list --> return nullptr") { REQUIRE(1 == 1); }

