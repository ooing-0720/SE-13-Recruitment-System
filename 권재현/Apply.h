#include <iostream>
#include <vector>
#include "Member.h"
using namespace std;

class Apply {
private:
	string companyName;			// 회사 이름
	int companyNumber;			// 사업자 번호
	string work;				// 업무
	int TO;						// 인원 수 (채용 인원수)
	string deadlineDate;		// 신청 마감일
	string applierID;				// 채용 신청자 ID

	int applyCount;

public:
	void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, string applier);	// 채용 지원 생성
	void getApply();
	int getCompanyNumber();
	int getApplyCount();
	string getApplierID();
	void cancelApply(Member member);
	void countWorkApplyByCompany();
	void countWorkApplyByGeneral(Member member);
};