#define CATCH_CONFIG_MAIN

// found here:
// https://raw.githubusercontent.com/catchorg/Catch2/master/single_include/catch2/catch.hpp
#include "catch.h"

// First test: checking if framework is working
TEST_CASE("This is my first Test using Catch C++ Framework")
{
    // every unit enviroment should consist of three main parts

    // ARRANGE: Where we configure everything we need for the test
    std::string myString = "string";
    std::string mySecondString = "string";

    // ACT: Where actual test is done
    auto result = myString == mySecondString;

    // ASSERT: To check what the test did
    REQUIRE(result == true);

}

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


/* COMMAND LINE TEST
 *
 * Run specific Test
 *  thisTest
 *  "This test"
 *
 * Run Group of test
 *  Customer*
 *  *Customer
 *
 * Run all tests except
 *  Exclude: otherTest
 *  ~otherTest
 *  ~*other*
 *
 * Mixing test
 *  a* ~ab* abc
 *
 * * TO MAKE THE TESTS: Just execute the bin or exe in console and using flags
 *  Example:
 *      ./CppUnitTesting18 --list-tests
 *      ./CppUnitTesting18 --list-tests-names-only
 *
 *      ./CppUnitTesting18 "<Should>*"
 *      ./CppUnitTesting18 "<Called>*" // all started like
 *      ./CppUnitTesting18 *nullptr // all finishing in nullptr
 *      ./CppUnitTesting18 *exception* //all with exception in between
 * */

TEST_CASE("<Should> throw exception <When> invalid Product") { REQUIRE(1 == 1); }
TEST_CASE("<Called> with empty list --> return exception") { REQUIRE(1 == 1); }
TEST_CASE("<Should> throw exception <When> invalid Alumno Element") { REQUIRE(1 == 1); }
TEST_CASE("<Called> with empty list --> return false") { REQUIRE(1 == 1); }
TEST_CASE("<Should> throw exception <When> nullptr") { REQUIRE(1 == 1); }
TEST_CASE("<Called> with empty list --> return true") { REQUIRE(1 == 1); }
TEST_CASE("<Should> throw exception <When> invalid Game mode") { REQUIRE(1 == 1); }