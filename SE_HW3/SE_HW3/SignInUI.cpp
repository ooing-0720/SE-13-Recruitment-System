#include "SignInUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

SignInUI::SignInUI() : signIn() {}

/*
 * 로그인 boundary class
 */
void SignInUI::putUserDetails(vector<Member>& member, Member& currentMember)
{ 
    // 로그인 정보 입력
    string id;
    string password;
    inFp >> id >> password;

    outFp << "2.1. 로그인" << endl;
    string result = SignIn::putUserDetails(member, currentMember, id, password);
    outFp << "> " << result << endl << endl;
}