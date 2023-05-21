#include <iostream>
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
using namespace std;

/*
* ���� ����(Apply) Entity Ŭ����
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
	void cancelApply();		// ���� ���
	void countWorkApplyByGeneral(string applierID);
};
