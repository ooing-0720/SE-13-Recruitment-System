#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <iostream>
#include "Member.h"

using namespace std;

/*
 * ȸ��Ż�� control class
 */

class WithDrawal {
public:
    string clickWithdrawal(Member currentMember, vector<Member>& members);
};
#endif