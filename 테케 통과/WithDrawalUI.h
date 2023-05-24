#ifndef WITHDRAWALUI_H
#define WITHDRAWALUI_H

#include "WithDrawal.h"

/*
 * 회원탈퇴 boundary class
 */
class WithDrawalUI
{
private:
    WithDrawal withDrawal;

public:
    WithDrawalUI();
    void clickWithdrawal(Member currentMember, vector<Member>& members);
};



#endif
