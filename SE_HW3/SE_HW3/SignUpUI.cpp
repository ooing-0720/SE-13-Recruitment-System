#include "SignUpUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

SignUpUI::SignUpUI() : signUp() {}

/*
 * ȸ�� ���� boundary class
 */

// ȸ�� ���� ���� �����
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

    // ȸ�� ���� control class�� �Է¹��� �� ����
    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    outFp << "> " << result << endl << endl;

}