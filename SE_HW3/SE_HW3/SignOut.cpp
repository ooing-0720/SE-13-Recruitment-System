#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

/*
* �α׾ƿ� control class
*/

// �α׾ƿ� ó��
string SignOut::signOut(Member& currentMember) {
    // ���� ȸ���� �α����� ������ ���(status == true)
    if (currentMember.getStatus()) {
        currentMember.setStatus(false);         // �α����� ���� ����
        string result = currentMember.getID();
        return result;
    }
    else {
        return "�̹� �α׾ƿ� �Ǿ��ֽ��ϴ�. \n";
    }
}