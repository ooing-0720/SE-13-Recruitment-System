#ifndef SIGNIN_H
#define SIGNIN_H

#include <iostream>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

/*
 * �α����� ó���ϴ� control class
 */
class SignIn {
public:

    static string putUserDetails(vector<Member>& members, Member& currentMember, string id, string password);
};


#endif