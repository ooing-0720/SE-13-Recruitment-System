#include "WithDrawalUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

WithDrawalUI::WithDrawalUI() : withDrawal() {}

/*
 * ȸ��Ż�� boundary class
 */
void WithDrawalUI::clickWithdrawal(Member currentMember, vector<Member>& members)
{
    string result = withDrawal.clickWithdrawal(currentMember, members);
    outFp << "1.2. ȸ��Ż��" << endl;
    outFp << "> " << result << endl << endl;
}