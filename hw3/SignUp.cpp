#include "SignUp.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
/*
 * 회원가입 함수
 */
void SignUp::putUserDetails(int devideMemberType, string name, int number, string id, string password)
{
    // 회사회원 가입
    if (devideMemberType == 0)
    {
        CompanyMember companyMember(id, password, name, number);
        companyMember.saveMember(devideMemberType);
    }
        // 일반회원 가입
    else if (devideMemberType == 1)
    {
        GeneralMember generalMember(id, password, name, number);
        generalMember.saveMember(devideMemberType);
    }
}
