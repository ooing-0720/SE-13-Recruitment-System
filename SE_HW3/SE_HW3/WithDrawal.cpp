#include "WithDrawal.h"
/*
 * ȸ��Ż�� �Լ�
 */
string WithDrawal::clickWithdrawal(Member currentMember, vector<Member>& members) {
    for (int i = 0; i < members.size(); i++) {
        // ���� ��� �� ���� �α����� ȸ���� �����Ͽ�����
        // �Է¹��� ����� ��ȣ�� ��ġ�ϴ� ���� ��ü�� ��� �ش� ��ü�� ����
        if (members[i].getID() == currentMember.getID()) {

            string result = "> " + members[i].getID();
            members[i].deleteMember();
            return result;
        }
    }
}