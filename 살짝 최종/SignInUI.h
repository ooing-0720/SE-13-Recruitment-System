#ifndef SIGNINUI_H
#define SIGNINUI_H

#include "SignIn.h"

/*
 * �α��� boundary class
 */
class SignInUI
{
private:
    SignIn signIn;

public:
    SignInUI();
    void putUserDetails(string id, string password);
};


#endif
