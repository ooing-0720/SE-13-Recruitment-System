#include "SignInUI.h"
extern FILE* inFp, * outFp;

SignInUI::SignInUI() : signIn() {}

/*
 * �α��� boundary class
 */
void SignInUI::putUserDetails(vector<Member>& member, Member& currentMember)
{ 
    // �α��� ���� �Է�
    string id;
    string password;
    fscanf(inFp, "%s %s ", &id, &password);

    fprintf(outFp, "2.1. �α���\n");
    string result = SignIn::putUserDetails(member, currentMember, id, password);
    fprintf(outFp, "%s ", result);
}