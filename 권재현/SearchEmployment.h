#pragma once
#include "Recruitment.h"
#include "Apply.h"
#include "Member.h"

using namespace std;

class SearchEmployment {
private:
	Recruitment* recruitments;
	Apply* apply;
public:
	//SearchEmployment();
	void ShowEmploymentlist(Member member, char *company_name);
	Apply addNewApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier);
};

