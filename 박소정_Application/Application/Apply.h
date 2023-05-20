#include <iostream>
using namespace std;

class Apply {
private:
	int companyNumber;
	string work;
	int applyCount;
	Member* applier;
public:
	void getApply();
	int getCompanyNumber();
	int getApplyCount();
	Member* getApplier();
	void cancelApply(Member member);
	void countWorkApplyByCompany();
	void countWorkApplyByGeneral(Member member);
};
