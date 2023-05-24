#include "SignUpUI.h"
extern FILE* inFp, * outFp;

SignUpUI::SignUpUI() : signUp() {}

/*
 * 회원탈퇴 boundary class
 */

void SignUpUI::putUserDetails(vector<Member>& member)
{
    
    // 회원가입 정보 입력
    int devideMemberType;   // 회사 회원: 1, 일반 회원: 2
    string name;
    int number;
    string id;
    string password;
    fscanf(inFp, "%d %s %d %s %s ", &devideMemberType, &name, &number, &id, &password);

    fprintf(outFp, "1.1. 회원가입\n");
    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    fprintf(outFp, "%s\n", result);
}