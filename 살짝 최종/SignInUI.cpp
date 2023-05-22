#include "SignInUI.h"

SignInUI::SignInUI() : signIn() {}

/*
 * ·Î±×ÀÎ boundary class
 */
void SignInUI::putUserDetails(string id, string password)
{
    signIn.putUserDetails(id, password);
}