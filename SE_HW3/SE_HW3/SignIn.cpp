#include "SignIn.h"
#include <typeinfo>

/*
 * �α��� control class
 */

 // �α��� ó��
string SignIn::putUserDetails(vector<Member>& members, Member& currentMember, std::string id, std::string password) {
    
    // ������ ȸ�� ��ü�� ����
    for (Member i : members) {
        // �Է¹��� id, pw�� ���� ���� ���� ȸ���� �ִٸ� �α��� ����
        if (i.getID().compare(id) == 0 && i.getPassword() == password) {
            currentMember = i;
            currentMember.setStatus(true);

            string result = currentMember.getID() + " " + currentMember.getPassword();
            return result;
        }
    }
    // ������ ȸ�� �� ��ġ�ϴ� ���� ���� ȸ���� ���� ��� ����
    string result = "��ϵ� ȸ�� ����";
    return result;
}