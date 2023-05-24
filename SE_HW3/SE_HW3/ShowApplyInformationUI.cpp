#include "ShowApplyInformationUI.h"
extern FILE* inFp, * outFp;

ShowApplyInformationUI::ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->showApplyInformation = ShowApplyInformation(apply, recruitment);
}

// 4.3 ���� ���� ��ȸ
void ShowApplyInformationUI::inquireApply(string memberID, vector<Apply>& apply) {
    fprintf(outFp, "4.3. ���� ���� ��ȸ\n");
    vector<tuple<string, int, string, int, string, string>> saveApply;
    saveApply = showApplyInformation.showApply(memberID, apply);

    for (int i = 0; i < saveApply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a = saveApply[i];
        fprintf(outFp, "%s %d %s %d %s\n", get<0>(a), get<1>(a), get<2>(a), get<3>(a), get<4>(a));
    }
}

/*
* 4.4 ���� ��� �Է�
*/
void ShowApplyInformationUI::cancelApply(string applierID, vector<Apply>& apply) {
    // ���� ����� ȸ����(�����) ��ȣ �Է�
    int companyNumber;
    fscanf(inFp, "%d" , &companyNumber);
    
    fprintf(outFp, "4.4. ���� ���\n");

    
    string result = showApplyInformation.cancelApply(companyNumber, applierID, apply);

    fprintf(outFp, "%s\n", result);
}

/*
* 5.1 ���� ���� ��� �Է�
*/
void ShowApplyInformationUI::showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment) {
    fprintf(outFp, "5.1. ���� ���� ���\n");
    map<string, int> countByWork = showApplyInformation.showWorkApply(member, id, companyName, apply, recruitment);

    for (map<string, int>::iterator it = countByWork.begin(); it != countByWork.end(); it++) {
        fprintf(outFp, "%s %d\n", it->first, it->second);
    }
}