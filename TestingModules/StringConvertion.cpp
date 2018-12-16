//
// Created by cheetos on 16/12/18.
//

#include "../dependencies/catch.h"

//lets create a class
class myClass
{
    public:
        int myInt;
        double mydouble;

        myClass(int myInt, double myDouble): myInt{myInt}, mydouble{myDouble} {}

        ~myClass() { }

};

/*
 * In order to compare two complex classes in a REQUIRE or CHECK
 * and if we want data from objects is shown we should create a type of
 * handlers.
 *
 * To avoid this
 * {?} == {?}
 * */

TEST_CASE("<Check> if two classes have same values", "[MODELS]")
{

}

