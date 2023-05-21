#include <iostream>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
using namespace std;

/*
* 지원 정보(Apply) Entity 클래스
*/
class Apply {
private:
	string companyName;
	int companyNumber;
	string work;
	string applierID;
	
public:
	string getCompanyName();
	string getWork();
	int getCompanyNumber();
	string getApplierID();
	void cancelApply();		// 지원 취소
	void countWorkApplyByGeneral(string applierID);
};
