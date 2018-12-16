//
// Created by cheetos on 16/12/18.
//

#include "MyClass.h"

std::string MyClass::showData() {
    auto integerString = std::to_string(this->myInt);
    auto doubleString = std::to_string(this->mydouble);

    std::string dataInString = integerString + " | " + doubleString;
    return dataInString;
}
