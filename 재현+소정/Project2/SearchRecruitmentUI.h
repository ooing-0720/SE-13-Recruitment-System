#pragma once
#include "SearchRecruitment.h"

// ä�� ����(Recruitment)�� ȭ�鿡 ����ϴ� boundary class
class SearchRecruitmentUI {
private:
	SearchRecruitment searchRecruitment;
public:
	SearchRecruitmentUI();
	void SearchByCompanyName(string company_name, vector<Recruitment>& recruitment);
	Apply ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment);
};

