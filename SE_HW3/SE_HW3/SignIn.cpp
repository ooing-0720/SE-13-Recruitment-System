#include "SignIn.h"
#include <typeinfo>
/*
 * �α��� �Լ�
 */
string SignIn::putUserDetails(vector<Member>& members, Member& currentMember, std::string id, std::string password) {
    // �α���

    for (Member i : members) {
        //ȸ������ �Ǿ�����
        if (i.getID().compare(id) == 0 && i.getPassword() == password) {
            currentMember = i;
            currentMember.setStatus(true);

            string result = currentMember.getID() + " " + currentMember.getPassword();
            return result;
        }
    }
    //ȸ������ �Ǿ����� ����
    string result = "��ϵ� ȸ�� ����";
    return result;
}