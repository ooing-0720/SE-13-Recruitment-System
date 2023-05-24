#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <iostream>
#include "Member.h"

using namespace std;

/*
 * È¸¿øÅ»Åð¸¦ Ã³¸®ÇÏ´Â control class
 */
class WithDrawal {
public:
    void clickWithdrawal(Member member);
    string clickWithdrawal(Member currentMember, vector<Member>& members);
};
#endif