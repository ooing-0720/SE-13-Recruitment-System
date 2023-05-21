#include "WithDrawalUI.h"

WithDrawalUI::WithDrawalUI() : withDrawal(){}

/*
 * 회원탈퇴 boundary class
 */
void WithDrawalUI::clickWithdrawal(Member member)
{
    withDrawal.clickWithdrawal(member);
}