#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

void SignOut::signOut(Member& currentMember){
    //로그아웃
    if(currentMember.getStatus()){
        currentMember.setStatus(false);
        cout << "로그아웃 되었습니다. " << endl;
    }
    else{
        cout << "이미 로그아웃 되어있습니다. " << endl;
    }
}