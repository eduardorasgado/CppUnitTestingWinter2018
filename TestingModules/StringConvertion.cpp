//
// Created by cheetos on 16/12/18.
//

#include <memory>
#include <iostream>
#include <cstdlib>

#include "../dependencies/catch.h"

/*
 * In order to compare two complex classes in a REQUIRE or CHECK
 * and if we want data from objects is shown we should create a type of
 * handlers.
 *
 * To avoid this
 * {?} == {?}
 * or this
 * 0x56540528ee40 == 0x5654052900f0
 *
 * We create STRING CONVERSIONS
 * */

#include "../Models/MyClass.h"

 //traditional method by using Operator << overloading for std::ostream
std::ostream& operator<< (std::ostream& os, std::shared_ptr<MyClass> const obj)
{
    // no need to const casting because shared_ptr handles it
    os << obj->showData();
    return os;
}


//Catch::toString Overload
//namespace Catch
//{
//    std::string toString(MyClass& obj)
//    {
//        return obj.showData();
//    }
//}

TEST_CASE("<Check> if two classes have same values", "[MODELS]")
{
    auto c1 = std::make_shared<MyClass>(4,2324232.43643);
    auto c2 = std::make_shared<MyClass>(5,2223423432.343);

    //do not fail
    //auto c3 = c1;

    // make it fail
    auto c3 = std::make_shared<MyClass>(4,2324232.43643);

    // using operator<< overloading above, c1 and c3 is printed like a string
    // in test output
    REQUIRE(c1 == c3);
}

