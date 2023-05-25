#include "WithDrawalUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

WithDrawalUI::WithDrawalUI() : withDrawal() {}

/*
 * È¸¿øÅ»Åð boundary class
 */

// È¸¿ø Å»Åð ¹øÈ£ Å¬¸¯(Ãâ·Â)
void WithDrawalUI::clickWithdrawal(Member currentMember, vector<Member>& members)
{
    string result = withDrawal.clickWithdrawal(currentMember, members);
    outFp << "1.2. È¸¿øÅ»Åð" << endl;
    outFp << "> " << result << endl << endl;
}