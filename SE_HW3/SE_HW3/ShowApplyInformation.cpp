#include "ShowApplyInformation.h"
#include "CompanyMember.h"
#include <iterator>

ShowApplyInformation::ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->applies = apply;
    this->recruitments = recruitment;
}

bool compareName(const Apply& n1, const Apply& n2) {
    return n1.getCompanyName() < n2.getCompanyName();
};

// �Ϲ� ȸ�� ������ ���� ������ ����ϴ� �Լ�
vector<tuple<string, int, string, int, string, string>> ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {

    vector<tuple<string, int, string, int, string, string>> saveApply;

    sort(apply.begin(), apply.end(), compareName);
    for (int i = 0; i < apply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a;
        a = apply[i].getApply();
        if (memberID == get<5>(a))
        {
            saveApply.push_back(a);
        }
    }
    return saveApply;
}

/*
* ���� ��� ����� �ϴ� �Լ�
*/
string ShowApplyInformation::cancelApply(int companyNumber, string applierID, vector<Apply>& apply) {

    for (int i = 0; i < apply.size(); i++) {
        // ���� ��� �� ���� �α����� ȸ���� �����Ͽ�����
        // �Է¹��� ����� ��ȣ�� ��ġ�ϴ� ���� ��ü�� ��� �ش� ��ü�� ����
        if (apply[i].getCompanyNumber() == companyNumber && apply[i].getApplierID() == applierID) {

            string result = apply[i].getCompanyName() + " " + to_string(companyNumber) + " " + apply[i].getWork();
            apply[i].cancelApply();
            return result;
        }
    }
}

/*
* ���� ���� ��� ������ �������� �Լ�
*/
map<string, int> ShowApplyInformation::showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment) {
    map<string, int> countByWork;   // ������ ���� Ƚ���� �����ϴ� map ����
    map<string, int>::iterator it;   // map�� ��ȸ�ϱ� ���� iterator ����

    // ȸ�� ȸ���� ���
    if (member.getType() == "CompanyMember") {
        for (int i = 0; i < apply.size(); i++) {
            // ������� ����� ��� ä�� ������ ���� ������ ������ �� ���
            if (apply[i].getCompanyName() == companyName) {
                it = countByWork.find(apply[i].getWork());
                // �ش� ������ map�� ���� ���
                if (it == countByWork.end()) {
                    countByWork[apply[i].getWork()] = 1;// map�� �߰�
                }
                // �ش� ������ map�� �ִ� ���
                else {
                    ++countByWork[apply[i].getWork()];// ���� value ���� 1 ����
                }
            }
        }
        return countByWork;
    }

    // �Ϲ� ȸ���� ���
    else {

        for (int i = 0; i < apply.size(); i++) {
            // ������ ������ ������ ���� ������ ���� Ƚ�� ���
            if (apply[i].getApplierID() == id) {
                it = countByWork.find(apply[i].getWork());

                // �ش� ������ map�� ���� ���
                if (it == countByWork.end()) {
                    countByWork[apply[i].getWork()] = 1;   // map�� �߰�
                }
                // �ش� ������ map�� �ִ� ���
                else {
                    ++countByWork[apply[i].getWork()];   // ���� value ���� 1 ����
                }

            }
        }
        return countByWork;
    }
}