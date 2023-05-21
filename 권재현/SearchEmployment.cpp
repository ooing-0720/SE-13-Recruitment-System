#include "SearchEmployment.h"

//SearchEmployment::SearchEmployment() {}

// 채용 정보를 불러와주는 함수
void SearchEmployment::ShowEmploymentlist(Member member, char* company_name) {
	
}

Apply SearchEmployment::addNewApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, string applierID) {
	apply->setApply(companyName, companyNumber, work, TO, deadlineDate, applierID);
	return *apply;
}