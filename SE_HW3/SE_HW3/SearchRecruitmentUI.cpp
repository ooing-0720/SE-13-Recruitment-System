#include "SearchRecruitmentUI.h"
extern FILE* inFp, * outFp;

SearchRecruitmentUI::SearchRecruitmentUI() {
    SearchRecruitment* searchRecruitment = new SearchRecruitment;
}

// 4.1. ä�� ���� �˻�
void SearchRecruitmentUI::SearchByCompanyName(vector<Recruitment>& recruitment) {
    // �˻��� ȸ�� ���� �Է�
    string companyName;
    fscanf(inFp, "%s", &companyName);

    fprintf(outFp, "4.1. ä�� ���� �˻�\n");
    vector<tuple<string, int, string, int, string>> saveRecruitment;
    saveRecruitment = SearchRecruitment::ShowRecruitmentList(companyName, recruitment);

    for (int i = 0; i < saveRecruitment.size(); i++)
    {
        tuple<string, int, string, int, string> a = saveRecruitment[i];
        fprintf(outFp, "%s %d %s %d %s\n", get<0>(a), get<1>(a), get<2>(a), get<3>(a), get<4>(a));
    }
}

// 4.2. ä�� ����
void SearchRecruitmentUI::ApplyEmployment(string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply) {
    // ������ ȸ�� ��ȣ(����� ��ȣ) �Է�
    int companyNumber;
    fscanf(inFp, "%d", &companyNumber);

    fprintf(outFp, "4.2. ä�� ����\n");

    tuple<string, int, string> temp = searchRecruitment.addNewApply(companyNumber, applierID, recruitment, apply);
    if ((get<0>(temp) == "0") && (get<1>(temp) == 0) && (get<2>(temp) == "0"))
    {
        return;
    }
    fprintf(outFp, "% %d %s\n", get<0>(temp), get<1>(temp), get<2>(temp));
}