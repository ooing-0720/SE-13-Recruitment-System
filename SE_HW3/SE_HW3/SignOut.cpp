#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

string SignOut::signOut(Member& currentMember) {
    //�α׾ƿ�
    if (currentMember.getStatus()) {
        currentMember.setStatus(false);
        string result = currentMember.getID();
        return result;
    }
    else {
        return "�̹� �α׾ƿ� �Ǿ��ֽ��ϴ�. \n";
    }
}