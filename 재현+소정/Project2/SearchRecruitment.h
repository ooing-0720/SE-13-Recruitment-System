#pragma once
#include <algorithm>
#include "Recruitment.h"
#include "Apply.h"
#include "Member.h"

using namespace std;

class SearchRecruitment {
private:
	Apply apply;
public:
	void ShowRecruitmentList(string companyName, vector<Recruitment>& recruitment);
	Apply addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment);
};

