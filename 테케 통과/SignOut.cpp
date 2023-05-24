#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

string SignOut::signOut(Member& currentMember){
    //로그아웃
    if(currentMember.getStatus()){
        currentMember.setStatus(false);
        string result = "> " + currentMember.getID();
        return result;
    }
    else{
        cout << "이미 로그아웃 되어있습니다. " << endl;
    }
}