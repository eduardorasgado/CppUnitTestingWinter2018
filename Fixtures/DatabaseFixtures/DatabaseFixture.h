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
    //
    auto mydb = DatabaseFixture();

    CHECK(mydb.connectToDB());
}

TEST_CASE_METHOD(DatabaseFixture, "Database: Inserting data")
{
    auto mydb = DatabaseFixture();
    auto data = mydb.NewUsers;
    CHECK(mydb.insertingData("Users", data));
}

TEST_CASE_METHOD(DatabaseFixture, "Database: Updating data")
{
    // ARRANGE
    auto mydb = DatabaseFixture();

    // ACT
    auto data = mydb.NewUsers;
    // inserting data to be replaced
    mydb.insertingData("Users", data);

    // Showing new members
    for(auto& u : mydb.NewUsers) std::cout << u << " ";
    std::cout << std::endl;

    // old name and new name
    std::vector<std::string> dupleUser{mydb.userToUpdate, "Eduardo"};

    // ASSERT
    CHECK(mydb.updatingData("Users", dupleUser));

    // showing updated list
    for(auto& u : mydb.NewUsers) std::cout << u << " ";
    std::cout << std::endl;
}

