#include "SignOutUI.h"
#include "SignOut.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

/*
* �α׾ƿ� boundary class
*/

// �α׾ƿ� ��ư Ŭ��(���)
void SignOutUI::signOutUI( Member& member) {
    outFp << "2.2. �α׾ƿ�" << endl;

    // �α׾ƿ� control class�� �Է¹��� �� ����
    string result = SignOut::signOut(member);
    outFp << "> " << result << endl << endl;
}