#ifndef WITHDRAWALUI_H
#define WITHDRAWALUI_H

#include "WithDrawal.h"

/*
 * ȸ��Ż�� boundary class
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