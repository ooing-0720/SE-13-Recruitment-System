#pragma once
#include "SearchRecruitment.h"

// 채용 정보(Recruitment)를 화면에 출력하는 boundary class
class SearchRecruitmentUI {
private:
	SearchRecruitment searchRecruitment;
public:
	SearchRecruitmentUI();
	void SearchByCompanyName(string company_name, vector<Recruitment>& recruitment);
	Apply ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment);
};

