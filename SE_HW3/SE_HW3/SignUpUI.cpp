#include "SignUpUI.h"
extern FILE* inFp, * outFp;

SignUpUI::SignUpUI() : signUp() {}

/*
 * 회원탈퇴 boundary class
 */

void SignUpUI::putUserDetails(vector<Member>& member)
{
    cout << "1";
    // 회원가입 정보 입력
    int devideMemberType;   // 회사 회원: 1, 일반 회원: 2
    string name;
    int number;
    string id;
    string password;
    fscanf(inFp, "%d %s %d %s %s ", &devideMemberType, &name, &number, &id, &password);

    cout << "2";
    fprintf(outFp, "1.1. 회원가입\n");
    cout << "3";
    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    cout << "4";
    fprintf(outFp, "%s\n", result.c_str());
    cout << "5";
}