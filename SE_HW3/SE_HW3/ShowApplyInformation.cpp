#include "ShowApplyInformation.h"
#include "CompanyMember.h"
#include <iterator>


/*
* ���� ���� ����(ó��) control class
*/
ShowApplyInformation::ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->applies = apply;
    this->recruitments = recruitment;
}

bool compareName(const Apply& n1, const Apply& n2) {
    return n1.getCompanyName() < n2.getCompanyName();
};

// �Ϲ� ȸ�� ������ ���� ���� ��� ó��
vector<tuple<string, int, string, int, string, string>> ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {

    vector<tuple<string, int, string, int, string, string>> saveApply;

    sort(apply.begin(), apply.end(), compareName);

    // ��� ���� ������ ����
    for (int i = 0; i < apply.size(); i++)
    {
        // �ش� ���� ������ �����ڰ� ���� �α����� ȸ���� ���
        // �ش� ���� ���� ��� ó��
        tuple<string, int, string, int, string, string> a;
        a = apply[i].getApply();
        if (memberID == get<5>(a))
        {
            saveApply.push_back(a);
        }
    }
    return saveApply;
}

// �Է¹��� ȸ�� ��ȣ�� ��ġ�ϴ� ���� ���� ����
string ShowApplyInformation::cancelApply(int companyNumber, string applierID, vector<Apply>& apply) {

    // ��� ���� ������ ����
    for (int i = 0; i < apply.size(); i++) {
        // �ش� ������ ���� �α����� ȸ���� �����Ͽ�����
        // �Է¹��� ����� ��ȣ�� ��ġ�ϴ� ���� ��ü�� ��� �ش� ��ü�� ����
        if (apply[i].getCompanyNumber() == companyNumber && apply[i].getApplierID() == applierID) {

            string result = apply[i].getCompanyName() + " " + to_string(companyNumber) + " " + apply[i].getWork();
            apply[i].cancelApply();
            return result;
        }
    }
}

// ȸ�� ȸ��: �ڽ��� ����� ä�뺰 ������ �� ī��Ʈ
// �Ϲ� ȸ��: �ڽ��� ������ ä���� ������ ���� Ƚ�� ī��Ʈ 
map<string, int> ShowApplyInformation::showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment) {
    map<string, int> countByWork;   // ������ ���� Ƚ���� �����ϴ� map ����
    map<string, int>::iterator it;   // map�� ��ȸ�ϱ� ���� iterator ����

    // ȸ�� ȸ���� ���
    if (member.getType() == "CompanyMember") {
        //��� ä�� ������ ����
        for (int i = 0; i < apply.size(); i++) {

            // �ش� ä�� ������ �ڽ��� ����� ä�� ������ ���
            if (apply[i].getCompanyName() == companyName) {
                it = countByWork.find(apply[i].getWork());

                // �ش� ������ map�� ���� ��� map�� �߰�
                if (it == countByWork.end()) {
                    countByWork[apply[i].getWork()] = 1; 
                }
                // �ش� ������ map�� �ִ� ��� ���� value ���� 1 ����
                else {
                    ++countByWork[apply[i].getWork()];
                }
            }
        }
        return countByWork;
    }

    // �Ϲ� ȸ���� ���
    else {

        // ��� ���� ������ ����
        for (int i = 0; i < apply.size(); i++) {
            // ������ ������ ������ ��� ������ ���� Ƚ�� ���
            if (apply[i].getApplierID() == id) {
                it = countByWork.find(apply[i].getWork());

                // �ش� ������ map�� ���� ���  map�� �߰�
                if (it == countByWork.end()) {
                    countByWork[apply[i].getWork()] = 1;  
                }
                // �ش� ������ map�� �ִ� ��� ���� value ���� 1 ����
                else {
                    ++countByWork[apply[i].getWork()];
                }

            }
        }
        return countByWork;
    }
}