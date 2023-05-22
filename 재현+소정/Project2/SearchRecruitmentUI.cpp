#include "SearchRecruitmentUI.h"

SearchRecruitmentUI::SearchRecruitmentUI() {
	SearchRecruitment* searchRecruitment = new SearchRecruitment;
}

// 4.1 채용 정보 검색
void SearchRecruitmentUI::SearchByCompanyName(string companyName, vector<Recruitment>& recruitment) {
	searchRecruitment.ShowRecruitmentList(companyName, recruitment);
}

// 4.2 채용 지원
Apply SearchRecruitmentUI::ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment) {
	return searchRecruitment.addNewApply(companyNumber, applierID, recruitment);
}