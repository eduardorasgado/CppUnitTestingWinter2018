cmake_minimum_required(VERSION 3.13)
project(CppUnitTesting18)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppUnitTesting18 main.cpp dependencies/catch.h TestingModules/FirstTest.cpp TestingModules/TestNames.cpp TestingModules/CommandLineTests.cpp TestingModules/TagsUse.cpp TestingModules/SpecialTags.cpp TestingModules/CheckUse.cpp TestingModules/FalseAssertions.cpp)