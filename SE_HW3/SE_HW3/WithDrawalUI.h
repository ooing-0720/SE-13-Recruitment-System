#ifndef WITHDRAWALUI_H
#define WITHDRAWALUI_H

#include "WithDrawal.h"

/*
 * È¸¿øÅ»Åð boundary class
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