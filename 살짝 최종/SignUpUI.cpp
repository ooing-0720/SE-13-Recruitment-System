#include "SignUpUI.h"

SignUpUI::SignUpUI() : signUp() {}

/*
 * È¸¿øÅ»Åð boundary class
 */

void SignUpUI::putUserDetails(int devideMemberType, string name, int number, string id, string password)
{
    signUp.putUserDetails(devideMemberType, name, number, id, password);
}