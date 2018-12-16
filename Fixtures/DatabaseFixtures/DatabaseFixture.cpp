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

bool DatabaseFixture::insertingData(std::string TABLE, std::vector<std::string> data) {
    // logic to insert data into database
    // creating query
    if(data.size() == 0) return false;
    return true;
}

bool DatabaseFixture::updatingData(std::string TABLE, std::vector<std::string> data) {
    // logic to update
    // creating query
    if(data.size() == 0) return false;
    return true;
}
