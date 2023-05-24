#include "SignInUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

SignInUI::SignInUI() : signIn() {}

/*
 * �α��� boundary class
 */
void SignInUI::putUserDetails(vector<Member>& member, Member& currentMember)
{ 
    // �α��� ���� �Է�
    string id;
    string password;
    inFp >> id >> password;

    outFp << "2.1. �α���" << endl;
    string result = SignIn::putUserDetails(member, currentMember, id, password);
    outFp << "> " << result << endl << endl;
}