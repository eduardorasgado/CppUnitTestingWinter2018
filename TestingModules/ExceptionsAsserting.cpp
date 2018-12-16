//
// Created by cheetos on 15/12/18.
//
#include <iostream>

#include "../dependencies/catch.h"

/*
 * ASSERTING FOR EXCEPTIONS
 *
 * REQUIRE_THROWS(expression)
 * CHECK_THROWS(expression)
 *
 * REQUIRE_THROWS_AS(expression, type)
 * CHECK_THROWS_AS(expression, type)
 *
 * less common to find in code:
 * REQUIRE_NOTHROW(expression)
 * CHECK_NOTHROW(expression)
 * */

TEST_CASE("<Throw> exception <when> nullptr in baseClass", "[EXCEPTION]")
{
    auto num = 4;
    auto divisor = 0;
    if(divisor == 0)
    {

        REQUIRE_THROWS(throw "Division by zero is forbidden");
    }

}