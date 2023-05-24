#include "SearchRecruitmentUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

/*
* 채용 정보 검색 boundary class
*/

SearchRecruitmentUI::SearchRecruitmentUI() {
    SearchRecruitment* searchRecruitment = new SearchRecruitment;
}

// 입력받은 회사 회원(사업자 번호)이 등록한 채용 정보를 출력
void SearchRecruitmentUI::searchByCompanyName(vector<Recruitment>& recruitment) {
    // 검색할 회사 정보 입력
    string companyName;
    inFp >> companyName;

    outFp << "4.1. 채용 정보 검색" << endl;
    vector<tuple<string, int, string, int, string>> saveRecruitment;
    saveRecruitment = SearchRecruitment::showRecruitmentList(companyName, recruitment);

    for (int i = 0; i < saveRecruitment.size(); i++)
    {
        tuple<string, int, string, int, string> a = saveRecruitment[i];
        outFp << "> " << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << " " << get<3>(a) << " " << get<4>(a) << endl << endl;
    }
}

// 입력받은 회사 회원(사업자 번호)이 등록한 채용 정보에 지원
void SearchRecruitmentUI::applyRecruitment(string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply) {
    // 지원할 회사 번호(사업자 번호) 입력
    int companyNumber;
    inFp >> companyNumber;

    outFp << "4.2. 채용 지원" << endl;

    // 새로운 지원 정보 생성
    tuple<string, int, string> temp = searchRecruitment.addNewApply(companyNumber, applierID, recruitment, apply);
    if ((get<0>(temp) == "0") && (get<1>(temp) == 0) && (get<2>(temp) == "0"))
    {
        return;
    }
    outFp << "> " << get<0>(temp) << " " << get<1>(temp) << " " << get<2>(temp) << endl << endl;
}