#include "SignUpUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

SignUpUI::SignUpUI() : signUp() {}

/*
 * ȸ��Ż�� boundary class
 */

void SignUpUI::putUserDetails(vector<Member>& member)
{

    // ȸ������ ���� �Է�
    int devideMemberType;   // ȸ�� ȸ��: 1, �Ϲ� ȸ��: 2
    string name;
    int number;
    string id;
    string password;
    inFp >> devideMemberType >> name >> number >> id >> password;


    outFp << "1.1. ȸ������" << endl;

    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    outFp << "> " << result << endl << endl;

}