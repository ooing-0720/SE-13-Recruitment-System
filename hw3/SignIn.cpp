#include "SignIn.h"
/*
 * 로그인 함수
 */
string SignIn::putUserDetails(string id, string password)
{
    // 로그인
    Member member = *new Member(id, password);
    member.setStatus(true);
    string memberId = member.validate();
    return memberId;
}
