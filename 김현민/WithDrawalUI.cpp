#include "WithDrawalUI.h"

WithDrawalUI::WithDrawalUI()
{
    this->withDrawal = new WithDrawal();
}

/*
 * 회원탈퇴 boundary class
 */
void WithDrawalUI::clickWithdrawal(Member member)
{
    withDrawal.clickWithdrawal(member);
}