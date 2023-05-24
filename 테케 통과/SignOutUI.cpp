#include "SignOutUI.h"
#include "SignOut.h"

using namespace std;

void SignOutUI::signOutUI(Member &member) {
    cout << "2.2. 로그아웃" << endl;
    string result = SignOut::signOut(member);
    cout << result << endl;
}