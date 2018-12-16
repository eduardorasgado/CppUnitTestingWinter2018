//
// Created by cheetos on 16/12/18.
//

#include "DatabaseFixture.h"

bool DatabaseFixture::connectToDB()
{
    // do all stuff to try to connect
    isConnected = true;
}

bool DatabaseFixture::disconnectToDB() {
    // doing all stuff to disconnect
    isConnected = false;
}

void DatabaseFixture::insertingDataToNewUsers() {
    NewUsers.push_back("Lalo");
    NewUsers.push_back("Freddy");
    NewUsers.push_back("Leonard");
}

bool DatabaseFixture::insertingData(std::string TABLE, std::vector<std::string> data) {
    // logic to insert data into database
    // creating query
    for(int i = 0; i < data.size(); ++i)
    {
        // inserting into database
        UsersTable.push_back(data.at(i));
    }
    // if all users were inserted into DB
    if(data.size() == UsersTable.size()) return true;
    return false;
}

bool DatabaseFixture::updatingData(std::string TABLE, std::vector<std::string> updateMember) {
    // logic to update
    // creating query

    // lets see if user is in DB
    int posInDB = UserIsInDB(updateMember);

    // if user found
    if(posInDB != -1)
    {
        // then replace to new user name
        NewUsers.at(posInDB) = updateMember.at(1);
        if(NewUsers.at(posInDB) == updateMember.at(1))
        {
            // if user in vector is actually the user passed in function
            return true;
        }
    }
    return false;
}

int DatabaseFixture::UserIsInDB(std::vector<std::string> updateMember)
// Return user position if exists
{
    bool isInDB = false;

    int counter = 0;
    for(auto& user : NewUsers)
    {
        // if user to update is on NewUsers
        if(user == updateMember.at(0))
        {
            // then try update
            isInDB = true;
            return counter;
        }
        counter++;
    }
    // user is not in database
    return -1;
}