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

class DatabaseFixture {
    private:
        // Common setup code
        int isConnected;
        std::string HostName;
        std::string DBName;
        int Port;
        std::string DBEngine;
        std::string User;
        std::string Password;

    public:
        DatabaseFixture()
        {
            DBEngine = "MySQL";
            HostName = "localhost";
            User = "eduardorasgado";
            Port = 3036;
            Password = "InsecureAsFack";
            DBName = "TappDB";
            connectToDB();
        }
        ~DatabaseFixture()
        {
            //common teardown code
            disconnectToDB();

        }

        bool connectToDB();
        bool disconnectToDB();
        bool insertingData(std::string, std::vector<std::string>);
        bool updatingData(std::string, std::vector<std::string>);
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
    std::vector<std::string> NewUsers{"Lalo", "Freddy", "Leonard"};

    CHECK(mydb.insertingData("Users", NewUsers));
}

