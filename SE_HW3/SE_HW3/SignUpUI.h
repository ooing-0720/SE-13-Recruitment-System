#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <iostream>
#include "SignUp.h"
#include "Member.h"
/*
 * ȸ������ boundary class
 */
class SignUpUI
{
private:
    SignUp signUp;
public:
    SignUpUI();
    //    void putUserDetails(int devideMemberType, string name, int number, string id, string password);
    void putUserDetails(vector<Member>& member);

};



#endif