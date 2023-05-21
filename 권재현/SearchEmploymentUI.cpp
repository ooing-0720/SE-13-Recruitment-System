#include "SearchEmploymentUI.h"

SearchEmploymentUI::SearchEmploymentUI(){
	SearchEmployment *searchEmployment = new SearchEmployment;
}

// 4.1 채용 정보 검색
void SearchEmploymentUI::SearchByCompanyName(Member member, char* company_name) {
	searchEmployment.ShowEmploymentlist(member, company_name);
}

// 4.2 채용 지원
Apply SearchEmploymentUI::ApplyEmployment(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier) {
	return searchEmployment.addNewApply(companyName, companyNumber, work, TO, deadlineDate, applier);
}