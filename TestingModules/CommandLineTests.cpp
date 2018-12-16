//
// Created by cheetos on 15/12/18.
//

#include "../dependencies/catch.h"

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
