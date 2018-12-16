//
// Created by cheetos on 16/12/18.
//

#ifndef CPPUNITTESTING18_MYCLASS_H
#define CPPUNITTESTING18_MYCLASS_H

#include <iostream>

//lets create a class
class MyClass
{
    private:
        int myInt;
        double mydouble;
    public:
        MyClass(int myInt, double myDouble): myInt{myInt}, mydouble{myDouble} {}

        ~MyClass() { std::cout << "object dies" << "\n"; }

        std::string showData();
};

#endif //CPPUNITTESTING18_MYCLASS_H
