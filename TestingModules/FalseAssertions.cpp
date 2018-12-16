//
// Created by cheetos on 15/12/18.
//

#include <vector>
#include <iostream>

#include "../dependencies/catch.h"

/*
 * REQUIRE_FALSE and CHECK_FALSE
 *
 * Are a way to assert negative, it is the proper way to do
 *
 * REQUIRE(!someAction());  // This is not a way to do a negative test
 * CHECK(!someAction());
 * */

TEST_CASE("<When> json is == 0 <then> resend the message", "[AGENT], [!throws]")
{
    std::string name("Eduardo");

    int num = 1;
    auto convertion = std::to_string(num);

    auto s1 = sizeof(convertion);
    auto s2 = sizeof(name);

    REQUIRE_FALSE(s1 == s2); // in case it is true, then the test fails
}

TEST_CASE("<Check> if all data(incomplete fields) in parallel petition are returned", "[DATABASE]")
{
    auto dataQuantity = 10;
    auto data = std::vector<int>();

    for(auto& e : {1,2,8,25,56,67})
    {
        data.push_back(e);
        std::cout << e << " ";
    }
    std::cout << "\n";

    CHECK_FALSE(data.size() == dataQuantity);
}