#include "SignInUI.h"

SignInUI::SignInUI() : signIn(){}

/*
 * 로그인 boundary class
 */
void SignInUI::putUserDetails(vector<Member>& member, Member& currentMember, string id, string password)
{
    cout << "2.1. 로그인" << endl;
    string result = SignIn::putUserDetails(member,currentMember, id, password);
    cout << result << endl;
}