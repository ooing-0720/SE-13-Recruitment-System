#pragma once
#include "SearchEmployment.h"

// ä�� ����(Recruitment)�� ȭ�鿡 ����ϴ� boundary class
class SearchEmploymentUI {
private:
	SearchEmployment searchEmployment;
public:
	SearchEmploymentUI();
	void SearchByCompanyName(Member member, char* company_name);
	Apply ApplyEmployment(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier);
};

