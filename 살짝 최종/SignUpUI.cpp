#include "SignUpUI.h"

SignUpUI::SignUpUI() : signUp() {}

/*
 * ȸ��Ż�� boundary class
 */

void SignUpUI::putUserDetails(int devideMemberType, string name, int number, string id, string password)
{
    signUp.putUserDetails(devideMemberType, name, number, id, password);
}