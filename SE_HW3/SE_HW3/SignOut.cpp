#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

string SignOut::signOut(Member& currentMember) {
    //�α׾ƿ�
    if (currentMember.getStatus()) {
        currentMember.setStatus(false);
        string result = "> " + currentMember.getID();
        return result;
    }
    else {
        cout << "�̹� �α׾ƿ� �Ǿ��ֽ��ϴ�. " << endl;
    }
}