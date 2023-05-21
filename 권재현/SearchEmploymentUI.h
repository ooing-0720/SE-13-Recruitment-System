#pragma once
#include "SearchEmployment.h"

// 채용 정보(Recruitment)를 화면에 출력하는 boundary class
class SearchEmploymentUI {
private:
	SearchEmployment searchEmployment;
public:
	SearchEmploymentUI();
	void SearchByCompanyName(Member member, char* company_name);
	Apply ApplyEmployment(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier);
};

