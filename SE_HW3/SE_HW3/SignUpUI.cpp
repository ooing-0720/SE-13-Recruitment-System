#include "SignUpUI.h"
extern FILE* inFp, * outFp;

SignUpUI::SignUpUI() : signUp() {}

/*
 * ȸ��Ż�� boundary class
 */

void SignUpUI::putUserDetails(vector<Member>& member)
{
    cout << "1";
    // ȸ������ ���� �Է�
    int devideMemberType;   // ȸ�� ȸ��: 1, �Ϲ� ȸ��: 2
    string name;
    int number;
    string id;
    string password;
    fscanf(inFp, "%d %s %d %s %s ", &devideMemberType, &name, &number, &id, &password);

    cout << "2";
    fprintf(outFp, "1.1. ȸ������\n");
    cout << "3";
    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    cout << "4";
    fprintf(outFp, "%s\n", result.c_str());
    cout << "5";
}