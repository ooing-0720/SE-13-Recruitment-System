#include "SearchEmploymentUI.h"

SearchEmploymentUI::SearchEmploymentUI(){
	SearchEmployment *searchEmployment = new SearchEmployment;
}

// 4.1 채용 정보 검색
void SearchEmploymentUI::SearchByCompanyName(string company_name, vector<Recruitment>& recruitment) {
	searchEmployment.ShowEmploymentlist(company_name, recruitment);
}

// 4.2 채용 지원
Apply SearchEmploymentUI::ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment) {
	return searchEmployment.addNewApply(companyNumber, applierID, recruitment);
}