#include "SignUpUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

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
    inFp >> devideMemberType >> name >> number >> id >> password;


    outFp << "1.1. 회원가입" << endl;

    string result = SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
    outFp << "> " << result << endl << endl;

}