//
// Created by cheetos on 16/12/18.
//

#include <memory>
#include <iostream>

#include "../dependencies/catch.h"

//lets create a class
class MyClass
{
    private:
        int myInt;
        double mydouble;
    public:
        MyClass(int myInt, double myDouble): myInt{myInt}, mydouble{myDouble} {}

        ~MyClass() { }

        std::string showData()
        {
            auto integerString = std::to_string(this->myInt);
            auto doubleString = std::to_string(this->mydouble);

            std::string dataInString = integerString + " | " + doubleString;
            return dataInString;
        }
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
    //auto c1 = std::make_shared<>
}

