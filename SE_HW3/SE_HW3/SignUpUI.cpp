#include "SignUpUI.h"
extern FILE* inFp, * outFp;

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
    fscanf(inFp, "%d %s %d %s %s ", &devideMemberType, &name, &number, &id, &password);

    fprintf(outFp, "1.1. ȸ������\n");
    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    fprintf(outFp, "%s\n", result);
}