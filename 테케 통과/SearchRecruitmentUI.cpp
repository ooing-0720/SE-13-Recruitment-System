#include "SearchRecruitmentUI.h"

SearchRecruitmentUI::SearchRecruitmentUI() {
    SearchRecruitment* searchRecruitment = new SearchRecruitment;
}

// 4.1. 채용 정보 검색
void SearchRecruitmentUI::SearchByCompanyName(string companyName, vector<Recruitment>& recruitment) {
    cout << "4.1. 채용 정보 검색" << endl;
    vector<tuple<string, int, string, int, string>> saveRecruitment;
    saveRecruitment = SearchRecruitment::ShowRecruitmentList(companyName, recruitment);

    for (int i = 0; i < saveRecruitment.size(); i++)
    {
        tuple<string, int, string, int, string> a = saveRecruitment[i];
        cout << "> " << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << " " << get<3>(a) << " " << get<4>(a) << endl;
    }
}

// 4.2. 채용 지원
void SearchRecruitmentUI::ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply) {
    cout << "4.2. 채용 지원" << endl;

    tuple<string, int, string> temp = searchRecruitment.addNewApply(companyNumber, applierID, recruitment, apply);
    if ((get<0>(temp) == "0") && (get<1>(temp) == 0) && (get<2>(temp) == "0"))
    {
        return;
    }
    cout << "> " << get<0>(temp) << " " << get<1>(temp) << " " << get<2>(temp) << endl;

    return;
}