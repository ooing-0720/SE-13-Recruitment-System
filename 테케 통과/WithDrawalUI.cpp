#include "WithDrawalUI.h"
#include <iostream>

using namespace std;

WithDrawalUI::WithDrawalUI() : withDrawal(){}

/*
 * 회원탈퇴 boundary class
 */
void WithDrawalUI::clickWithdrawal(Member currentMember, vector<Member> &members) {
    string result = withDrawal.clickWithdrawal(currentMember, members);

    cout << result <<endl;
}
