#include "SignIn.h"
/*
 * �α��� �Լ�
 */
string SignIn::putUserDetails(string id, string password)
{
    // �α���
    Member member = *new Member(id, password);
    member.setStatus(true);
    string memberId = member.validate();
    return memberId;
}
