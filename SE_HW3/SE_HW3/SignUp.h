#ifndef SIGNUP_H
#define SIGNUP_H

#include <iostream>
#include "Member.h"

using namespace std;
/*
 * ȸ������ control class
 */
class SignUp {
public:
    static string putUserDetails(vector<Member>& member, int devideMemberType, string name, int number, string id, string password);
};


#endif