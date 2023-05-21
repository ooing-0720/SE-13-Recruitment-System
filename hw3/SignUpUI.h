#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <iostream>
#include "SignUp.h"
/*
 * 회원가입 boundary class
 */
class SignUpUI
{
private:
    SignUp signUp;

public:
    SignUpUI();
    void putUserDetails(int devideMemberType, string name, int number, string id, string password);
};



#endif
