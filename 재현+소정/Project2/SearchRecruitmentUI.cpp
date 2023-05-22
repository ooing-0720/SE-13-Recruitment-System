#include "SearchRecruitmentUI.h"

SearchRecruitmentUI::SearchRecruitmentUI() {
	SearchRecruitment* searchRecruitment = new SearchRecruitment;
}

// 4.1 ä�� ���� �˻�
void SearchRecruitmentUI::SearchByCompanyName(string companyName, vector<Recruitment>& recruitment) {
	searchRecruitment.ShowRecruitmentList(companyName, recruitment);
}

// 4.2 ä�� ����
Apply SearchRecruitmentUI::ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment) {
	return searchRecruitment.addNewApply(companyNumber, applierID, recruitment);
}