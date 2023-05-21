#include "SignUpUI.h"

SignUpUI::SignUpUI()
{
    this->signUp = new SignUp();
}

/*
 * 회원탈퇴 boundary class
 */

void SignUpUI::putUserDetails(int devideMemberType, string name, int number, string id, string password)
{
    signUp.putUserDetails(devideMemberType, name, number, id, password);
}