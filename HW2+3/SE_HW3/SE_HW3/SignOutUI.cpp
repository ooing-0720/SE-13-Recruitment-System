#include "SignOutUI.h"
#include "SignOut.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

/*
* 로그아웃 boundary class
*/

// 로그아웃 버튼 클릭(출력)
void SignOutUI::signOutUI( Member& member) {
    outFp << "2.2. 로그아웃" << endl;

    // 로그아웃 control class에 입력받은 값 전달
    string result = SignOut::signOut(member);
    outFp << "> " << result << endl << endl;
}