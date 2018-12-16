//
// Created by cheetos on 15/12/18.
//

#include "../dependencies/catch.h"

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
 *      [!mayfail] Does not fail the test if assetion fails
 *      [#<filename>] -# filename  -> will execute the test with that file
 *
 *  command:
 *      ./CppUnitTesting18 -t // list all tags
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