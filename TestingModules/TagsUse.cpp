//
// Created by cheetos on 15/12/18.
//
#include <vector>
#include <map>
#include <iostream>

#include "../dependencies/catch.h"

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
