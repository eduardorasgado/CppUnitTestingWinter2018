//
// Created by cheetos on 15/12/18.
//

#include "../dependencies/catch.h"

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