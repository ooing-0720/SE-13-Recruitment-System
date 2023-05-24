#include "SignInUI.h"
extern FILE* inFp, * outFp;

SignInUI::SignInUI() : signIn() {}

/*
 * 로그인 boundary class
 */
void SignInUI::putUserDetails(vector<Member>& member, Member& currentMember)
{ 
    // 로그인 정보 입력
    string id;
    string password;
    fscanf(inFp, "%s %s ", &id, &password);

    fprintf(outFp, "2.1. 로그인\n");
    string result = SignIn::putUserDetails(member, currentMember, id, password);
    fprintf(outFp, "%s ", result);
}