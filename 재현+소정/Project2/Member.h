#pragma once
#include <iostream>
using namespace std;

/*
 * �α����� ó���ϴ� control class
 */

class Member
{
private:
    string id;
    string password;

public:
    Member(string id, string password);
    string getID();
};