#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <iostream>
#include "Member.h"

using namespace std;

/*
 * 회원탈퇴를 처리하는 control class
 */
class WithDrawal {
public:
    string clickWithdrawal(Member currentMember, vector<Member>& members);
};
#endif
