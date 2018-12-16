//
// Created by cheetos on 16/12/18.
//

#include "../dependencies/catch.h"

/*
 * INTRODUCING TO SECTIONS
 *
 * Each section is executed independently
 * Enable reuse
 * Easy to read
 * Easy to maintain
 * Suports nested sections: sections can have sections
 * */

TEST_CASE("<Check> if Djakstra algorithm returns a vector including if empty", "[ALGORITHMS]")
{
    // INITIALIZATION HERE

    SECTION("Algorithm Djakstra performs step 1")
    {
        // TEST CODE
        CHECK(true);
    }

    SECTION("Algoritm Djakstra performs step 2")
    {
        // TEST CODE
        CHECK(false);
    }

    SECTION("Algorithm Djakstra performs step 3")
    {
        // Nested sections are allowed but we should be careful about
        // this use case

        SECTION("STEP 3.1")
        {
            // TEST INDEPENDENT
            CHECK(true);
        }

        SECTION("STEP 3.2")
        {
            // TEST INDEPENDENT
            CHECK(false);
        }
    }
}