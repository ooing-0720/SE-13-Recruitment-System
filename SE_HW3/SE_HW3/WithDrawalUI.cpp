#include "WithDrawalUI.h"
extern FILE* inFp, * outFp;

WithDrawalUI::WithDrawalUI() : withDrawal() {}

/*
 * ȸ��Ż�� boundary class
 */
void WithDrawalUI::clickWithdrawal(Member currentMember, vector<Member>& members)
{
    string result = withDrawal.clickWithdrawal(currentMember, members);
    fprintf(outFp, "1.2. ȸ��Ż��\n");
    fprintf(outFp, "%s\n", result);
}