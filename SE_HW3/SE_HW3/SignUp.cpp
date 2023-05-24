#include "SignUp.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <string>

/*
* 회원 가입 control class
*/

// 회원 가입 처리
string SignUp::putUserDetails(vector<Member>& member, int devideMemberType, string name, int number, string id, string password)
{
    // 회사회원으로 가입하는 경우
    if (devideMemberType == 1)
    {
        // CompanyMember로 인스턴스 생성 및 저장
        Member companyMember = CompanyMember(name, number, id, password);
        companyMember.saveMember(devideMemberType);
        member.push_back(companyMember);

        string result = "1 " + name + " " +
            to_string(number) + " " +
            id + " " +
            password;
        return result;
    }
    // 일반회원으로 가입하는 경우
    else if (devideMemberType == 2)
    {
        // GeneralMember로 인스턴스 생성 및 저장
        Member generalMember = GeneralMember(name, number, id, password);
        generalMember.saveMember(devideMemberType);
        member.push_back(generalMember);

        string result = "2 " + name + " " +
            to_string(number) + " " +
            id + " " +
            password;
        return result;
    }
}
