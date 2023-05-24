#include "ShowApplyInformationUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

/*
* ���� ���� ���, ����(ó��) boundary class
*/
ShowApplyInformationUI::ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->showApplyInformation = ShowApplyInformation(apply, recruitment);
}

// �ڽ��� ������ ���� ���
void ShowApplyInformationUI::inquireApply(string memberID, vector<Apply>& apply) {
    outFp << "4.3. ���� ���� ��ȸ" << endl;
    vector<tuple<string, int, string, int, string, string>> saveApply;
    saveApply = showApplyInformation.showApply(memberID, apply);

    for (int i = 0; i < saveApply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a = saveApply[i];
        outFp << "> " << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << " " << get<3>(a) << " " << get<4>(a) << endl << endl;
    }
}

// �Է¹��� ȸ���� ���� ���� ���� ��ư Ŭ��(���)
void ShowApplyInformationUI::cancelApply(string applierID, vector<Apply>& apply) {
    // ���� ����� ȸ����(�����) ��ȣ �Է�
    int companyNumber;
    inFp >> companyNumber;
    
    outFp << "4.4. ���� ���" << endl;

    string result = showApplyInformation.cancelApply(companyNumber, applierID, apply);

    outFp << "> " << result << endl << endl;
}

// ȸ�� ȸ��: �ڽ��� ����� ä�뺰 ������ �� ���
// �Ϲ� ȸ��: �ڽ��� ������ ä���� ������ ���� Ƚ�� ���
void ShowApplyInformationUI::showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment) {
    outFp << "5.1. ���� ���� ���" << endl;
    map<string, int> countByWork = showApplyInformation.showWorkApply(member, id, companyName, apply, recruitment);

    for (map<string, int>::iterator it = countByWork.begin(); it != countByWork.end(); it++) {
        outFp << "> " << it->first << " " << it->second << endl;
    }
    outFp << endl;
}