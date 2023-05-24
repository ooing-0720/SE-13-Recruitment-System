#ifndef SIGNIN_H
#define SIGNIN_H

#include <iostream>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

/*
 * 로그인을 처리하는 control class
 */
class SignIn {
public:

    static string putUserDetails(vector<Member>& members, Member& currentMember, string id, string password);
};


#endif
