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

        void connectToDB();
        void disconnectToDB();

};

TEST_CASE_METHOD(DatabaseFixture, "Database Testing")
{
    //
}
