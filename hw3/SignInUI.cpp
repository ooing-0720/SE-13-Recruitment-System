#include "SignInUI.h"

SignInUI::SignInUI() : signIn(){}

/*
 * 로그인 boundary class
 */
void SignInUI::putUserDetails(string id, string password)
{
    signIn.putUserDetails(id, password);
}