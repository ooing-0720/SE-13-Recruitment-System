#pragma once
#include "SearchEmployment.h"

// ä�� ����(Recruitment)�� ȭ�鿡 ����ϴ� boundary class
class SearchEmploymentUI {
private:
	SearchEmployment searchEmployment;
public:
	SearchEmploymentUI();
	void SearchByCompanyName(string company_name, vector<Recruitment> &recruitment);
	Apply ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment);
};

