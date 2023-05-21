#ifndef SIGNUP_H
#define SIGNUP_H

#include <iostream>

using namespace std;
/*
 * 회원가입을 처리하는 control class
 */
class SignUp {
public:
    void putUserDetails(int devideMemberType, string name, int number, string id, string password);
};


#endif
