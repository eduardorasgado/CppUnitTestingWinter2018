//
// Created by cheetos on 15/12/18.
//

#include "../dependencies/catch.h"

/*
 * MULTIPLE ASSERTIONS IN ONE TEST
 *
 * Recomendations:
 *  -Split to multiple Tests
 *  -Use CHECK
 *  Override operator ==
 *  Compare Collections // comparing using std collections
 *
 * */

TEST_CASE("<Check> 3 types of data in the custom vector", "[DATATYPE]")
{
    CHECK(2 == 1);

    CHECK("n" == "n");

    std::vector<int> myv{1,2,3,4,5,6};
    std::vector<float> myv2{1.2,1.3,1.4,1.5,1.6,1.7};
    CHECK(myv.size() == myv2.size());
}

