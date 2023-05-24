#include "SearchRecruitmentUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

/*
* ä�� ���� �˻� boundary class
*/

SearchRecruitmentUI::SearchRecruitmentUI() {
    SearchRecruitment* searchRecruitment = new SearchRecruitment;
}

// �Է¹��� ȸ�� ȸ��(����� ��ȣ)�� ����� ä�� ������ ���
void SearchRecruitmentUI::searchByCompanyName(vector<Recruitment>& recruitment) {
    // �˻��� ȸ�� ���� �Է�
    string companyName;
    inFp >> companyName;

    outFp << "4.1. ä�� ���� �˻�" << endl;
    vector<tuple<string, int, string, int, string>> saveRecruitment;
    saveRecruitment = SearchRecruitment::showRecruitmentList(companyName, recruitment);

    for (int i = 0; i < saveRecruitment.size(); i++)
    {
        tuple<string, int, string, int, string> a = saveRecruitment[i];
        outFp << "> " << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << " " << get<3>(a) << " " << get<4>(a) << endl << endl;
    }
}

// �Է¹��� ȸ�� ȸ��(����� ��ȣ)�� ����� ä�� ������ ����
void SearchRecruitmentUI::applyRecruitment(string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply) {
    // ������ ȸ�� ��ȣ(����� ��ȣ) �Է�
    int companyNumber;
    inFp >> companyNumber;

    outFp << "4.2. ä�� ����" << endl;

    // ���ο� ���� ���� ����
    tuple<string, int, string> temp = searchRecruitment.addNewApply(companyNumber, applierID, recruitment, apply);
    if ((get<0>(temp) == "0") && (get<1>(temp) == 0) && (get<2>(temp) == "0"))
    {
        return;
    }
    outFp << "> " << get<0>(temp) << " " << get<1>(temp) << " " << get<2>(temp) << endl << endl;
}