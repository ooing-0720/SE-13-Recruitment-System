#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

void SignOut::signOut(Member& currentMember) {
    //�α׾ƿ�
    if (currentMember.getStatus()) {
        currentMember.setStatus(false);
        cout << "�α׾ƿ� �Ǿ����ϴ�. " << endl;
    }
    else {
        cout << "�̹� �α׾ƿ� �Ǿ��ֽ��ϴ�. " << endl;
    }
}