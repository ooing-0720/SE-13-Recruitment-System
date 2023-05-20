#include "SignUp.h"
#include "Member.h"

/*
 * 회원가입 함수
 */
void SignUp::putUserDetails(int devideMemberType, string name, int number, string id, string password)
{
    // 회사회원 가입
    if (devideMemberType == 0)
    {
        Member member = new CompanyMember(name, number, id, password);
        member.saveMember();
    }
    // 일반회원 가입
    else if (devideMemberType == 1)
    {
        Member member = new GeneralMember(name, number, id, password);
        member.saveMember();
    }
}
