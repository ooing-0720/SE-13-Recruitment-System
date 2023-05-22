#pragma once
#include <iostream>
using namespace std;

/*
 * 로그인을 처리하는 control class
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