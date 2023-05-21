#include "WithDrawal.h"
/*
 * 회원탈퇴 함수
 */
void WithDrawal::clickWithdrawal(Member member)
{
    // 회원탈퇴
    member.deleteMember();
}
