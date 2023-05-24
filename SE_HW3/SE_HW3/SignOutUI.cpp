#include "SignOutUI.h"
#include "SignOut.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

void SignOutUI::signOutUI( Member& member) {
    outFp << "2.2. ·Î±×¾Æ¿ô" << endl;
    string result = SignOut::signOut(member);
    outFp << "> " << result << endl << endl;
}