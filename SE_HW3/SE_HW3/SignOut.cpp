#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

/*
* 로그아웃 control class
*/

// 로그아웃 처리
string SignOut::signOut(Member& currentMember) {
    // 현재 회원이 로그인한 상태인 경우(status == true)
    if (currentMember.getStatus()) {
        currentMember.setStatus(false);         // 로그인한 상태 해제
        string result = currentMember.getID();
        return result;
    }
    else {
        return "이미 로그아웃 되어있습니다. \n";
    }
}