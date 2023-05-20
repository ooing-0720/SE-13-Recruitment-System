#include "SignInUI.h"

SignInUI::SignInUI()
{
    this->signIn = new SignIn();
}

/*
 * 로그인 boundary class
 */
void SignInUI::putUserDetails(string id, string password)
{
    signIn.putUserDetails(id, password);
}