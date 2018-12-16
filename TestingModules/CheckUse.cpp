//
// Created by cheetos on 15/12/18.
//

#include "../dependencies/catch.h"

/*
 * CHECK == REQUIRE
 * Check acts same way as require, but
 *
 * REQUIRE(2++2==5); // Abort test -> Test Fail
 *
 * CHECK(2+2 == 5); // Continue test -> Test Fail
 * */

TEST_CASE("<Check> if json length is > 2000 <then> return false", "[AGENT]")
{
    std::string f1("Hola");
    std::string f2("2");

    auto equals = f1.length() == f2.length();

    CHECK(equals == true);
}

TEST_CASE("<check> if call to database call not correct values returns false", "[DATABASE]")
{
    CHECK( 2 == 2 );
}