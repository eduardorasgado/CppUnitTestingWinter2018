//
// Created by cheetos on 16/12/18.
//

#include "../dependencies/catch.h"
#include <iostream>

/*
 * BEHAVIOR DRIVEN DEVELOPMENT
 *
 *      -Use tests to describe behavior of the system
 *      -Sections are: Given ... When ... Then ...
 *      -Create executable specification(executable documentation)
 *      -Can validade continuolsly your product
 *      - Clear confusions in your services
 */

SCENARIO("Create a complete user enviroment", "[USER]")
{
    std::cout << "[SCENARIO USER TEST IS EXECUTED]" << std::endl;

    GIVEN("New user came from Github")
    {
        // Susbcribing from github

        WHEN("No email verification")
        {
            // doing something to get the password and remind the user to email verification
            THEN("Sending messages daily")
            {
                // doing assertion to finish the test
                std::cout << "messages daily" << std::endl;
                REQUIRE(true);
            }
        }

        WHEN("No password is set yet")
        {
            THEN("sending email if user do not set password when disconnect")
            {
                auto emailSend = true;
                std::cout << "sending email inmediately" << std::endl;
                REQUIRE(true);
            }
        }
    }
}
