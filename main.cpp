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

/* TAGS
 *
 * Tags are a simple way to group tests
 * Additional string associated with test case
 *  -must begin with an alpha numeric character
 * tags names are not casee sensitive
 *
 * UseTags to categorize test
 *  By code under test(DB, Model, Customer)
 *  By test type(Unit, Integration, Scenario)
 *  By execution speed(Slow, Fast)
 *
 *  How to call a tag using command line:
 *      ./CppUnitTesting18 "[CONTROLLER]"
 *      ./CppUnitTesting18 "[AGENT]"
 * */

TEST_CASE("find integers < 4000 when requiring raw data, returns a map of Sensor objects", "[CONTROLLER]")
{
    // ARRANGE
    // sensor names
    std::vector<std::string> sensorNames{"camera", "IMU", "PIR", "Encoder", "Fotoresistencia"};

    //where to store sensors passed
    auto mySensors = std::map<std::string, int>();
    // storing all measurements for sensors
    auto sensorsVector = std::vector<std::pair<std::string, int>>();

    // ACT
    // metrics for each sensor
    for (int i = 0; i < sensorNames.size(); ++i) {
        auto sensorMetric = std::pair<std::string, int>(sensorNames[i], 1000*(i+1));
        sensorsVector.push_back(sensorMetric);
    }
    // adding elements > 2000 to map
    for(auto& s : sensorsVector) if(s.second > 2000) mySensors.insert(s);

    // showing elements added to sensor map
    for(auto& e : mySensors) std::cout << "SENSOR: " << e.first << " | MEASUREMENT: "  << e.second << std::endl;

    // ASSERT
    REQUIRE(mySensors.size() <= sensorNames.size());
}

TEST_CASE("Check integers < 2000 when requiring raw data, returns a int vector", "[CONTROLLER]")
{
    REQUIRE(2 == 2);
}

TEST_CASE("Sorting all messages onWait, when customer broker calls then return a vector", "[AGENT]")
{
    REQUIRE(2 == 2);
}

TEST_CASE("Checking reconnection when connection goes off in all rooms in server 3, return vector of integer room ids", "[AGENT]")
{
    REQUIRE(2 == 2);
}

/*
 * SPECIAL TAGS
 *
 *  [!throws] exclude if run catch with -e or --nothrow
 *  example:
 *      ./CppUnitTesting18 -e
 *
 *  exists more:
 *      [!hide] or [.]
 *      example: [.nameTest]
 *
 *      [!shouldfail] -> Reverse failing logic(pass if fail)
 * */

TEST_CASE("Checking the carrier module do not crash if full data is "
          "called from redis(input is empty json and returns std::vector<mesasurement>)", "[!throws]")
{
    for (int i = 0; i < 100000000; ++i) {
        // do nothing but simulates a slow test
        for (int i = 0; i < 40; ++i) {

        }
    }
    REQUIRE(1 ==1);
}

