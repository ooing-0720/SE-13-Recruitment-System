#include "SearchEmployment.h"

//SearchEmployment::SearchEmployment() {}

// ä�� ������ �ҷ����ִ� �Լ�
void SearchEmployment::ShowEmploymentlist(Member member, char* company_name) {
	
}

Apply SearchEmployment::addNewApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier) {
	return apply->setApply(companyName, companyNumber, work, TO, deadlineDate, applier);
}