#include "SignOutUI.h"
#include "SignOut.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

void SignOutUI::signOutUI( Member& member) {
    outFp << "2.2. �α׾ƿ�" << endl;
    string result = SignOut::signOut(member);
    outFp << "> " << result << endl << endl;
}