//
// Created by cheetos on 16/12/18.
//

#pragma once

#include "../../dependencies/catch.h"

/*
 * Fixtures are a way to avoid repeating code in Testing
 *
 * By:
 *
 * */

#include <iostream>

class DatabaseFixture {
    public:
        // Common setup code
        int isConnected;
        std::string HostName;
        std::string DBName;
        int Port;
        std::string DBEngine;
        std::string User;
        std::string Password;
        std::vector<std::string> NewUsers;
        std::string userToUpdate;
        // DATABASE OBJECT FROM MODEL IN PROJECT TESTED
        // SHOULD BE HERE, OTHERWISE FIXTURE MAKES NO SENSE
        std::vector<std::string> UsersTable;

        DatabaseFixture()
        {
            DBEngine = "MySQL";
            HostName = "localhost";
            User = "eduardorasgado";
            Port = 3036;
            Password = "InsecureAsFack";
            DBName = "TappDB";
            userToUpdate = "Lalo";
            insertingDataToNewUsers();
            connectToDB();
        }
        ~DatabaseFixture()
        {
            //common teardown code
            disconnectToDB();
            std::cout << "DB dies" << std::endl;
        }

        bool connectToDB();
        bool disconnectToDB();
        void insertingDataToNewUsers();
        bool insertingData(std::string, std::vector<std::string>);
        bool updatingData(std::string, std::vector<std::string>);
        int UserIsInDB(std::vector<std::string>);
};

TEST_CASE_METHOD(DatabaseFixture, "Database reconnection")
{
    // TEST_CASE_METHOD calls constructor and destructor automatically
    // in every TEST, so it creates and destructs an object every test
    std::cout << "users in waiting list:" << DatabaseFixture::NewUsers.size() << std::endl;

    CHECK(DatabaseFixture::connectToDB());

}

TEST_CASE_METHOD(DatabaseFixture, "Database: Inserting data")
{
    auto data = DatabaseFixture::NewUsers;
    // simulating data insertion
    CHECK(DatabaseFixture::insertingData("Users", data));
}

TEST_CASE_METHOD(DatabaseFixture, "Database: Updating data")
{
    // Showing new members
    for(auto& u : DatabaseFixture::NewUsers) std::cout << u << " ";
    std::cout << std::endl;

    // old name and new name
    std::vector<std::string> dupleUser{DatabaseFixture::userToUpdate, "Eduardo"};

    // ASSERT
    CHECK(DatabaseFixture::updatingData("Users", dupleUser));

    // showing updated list
    for(auto& u : DatabaseFixture::NewUsers) std::cout << u << " ";
    std::cout << std::endl;
}


