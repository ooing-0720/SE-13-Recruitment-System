#include "WithDrawalUI.h"
extern FILE* inFp, * outFp;

WithDrawalUI::WithDrawalUI() : withDrawal() {}

/*
 * È¸¿øÅ»Åð boundary class
 */
void WithDrawalUI::clickWithdrawal(Member currentMember, vector<Member>& members)
{
    string result = withDrawal.clickWithdrawal(currentMember, members);
    fprintf(outFp, "1.2. È¸¿øÅ»Åð\n");
    fprintf(outFp, "%s\n", result);
}