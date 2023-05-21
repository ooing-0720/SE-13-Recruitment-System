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
	Member* applier;			// 회원 본인 정보(근데 이거 회원 주민번호로 하는게 더 간단하지 않나?)

	int applyCount;

public:
	void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier);	// 채용 지원 생성
	void getApply();
	int getCompanyNumber();
	int getApplyCount();
	Member* getApplier();
	void cancelApply(Member member);
	void countWorkApplyByCompany();
	void countWorkApplyByGeneral(Member member);
};