#include "SignInUI.h"

SignInUI::SignInUI() : signIn() {}

/*
 * �α��� boundary class
 */
void SignInUI::putUserDetails(string id, string password)
{
    signIn.putUserDetails(id, password);
}