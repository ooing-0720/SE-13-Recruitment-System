#include "SignOutUI.h"
#include "SignOut.h"
extern FILE* inFp, * outFp;

using namespace std;

void SignOutUI::signOutUI( Member& member) {
    fprintf(outFp, "2.2. ·Î±×¾Æ¿ô\n");
    string result = SignOut::signOut(member);
    fprintf(outFp, "%s ", result);
}