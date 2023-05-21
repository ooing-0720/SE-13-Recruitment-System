#include <iostream>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
using namespace std;

class Apply {
private:
	int companyNumber;
	string work;
	int applyCount;
	string companyName;
	Member* applier;
public:
	string getCompanyName();
	string getWork();
	int getCompanyNumber();
	int getApplyCount();
	Member* getApplier();
	void cancelApply(Member member);
	void countWorkApplyByCompany();
	void countWorkApplyByGeneral(Member member);
};
