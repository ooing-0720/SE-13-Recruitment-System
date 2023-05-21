#include "Apply.h"

void Apply::setApply(string _companyName, int _companyNumber, string _work, int _TO, string _deadlineDate, Member* _applier) {
	this->companyName = _companyName;
	this->companyNumber = _companyNumber;
	this->work = _work;
	this->TO = _TO;
	this->deadlineDate = _deadlineDate;
	this->applier = _applier;
}

int Apply::getCompanyNumber() {
	return companyNumber;
}

int Apply::getApplyCount() {
	return applyCount;
}

Member* Apply::getApplier() {
	return applier;
}

/*
* 지원 취소 기능
* 현재 진행중인 채용 정보에 대해 지원 취소
*/
void Apply::cancelApply(Member member) {
	for (int i = 0; i < applyCount - 1; i++) {
		if (applier[i].name == member.name) {
			applier[i] = applier[i + 1];
		}
	}
	// 회원 한 명의 지원이 취소되었으므로 지원자 수 1 감소
	--applyCount;
}

/*
* 회사 회원 지원 정보 통계 기능
* 해당 지원 정보에 대해 업무와 지원자 수 출력
*/
void Apply::countWorkApplyByCompany() {
	cout << work << " " << applyCount << endl;
}

/*
* 일반 회원 지원 정보 통계 기능
* 본인이 지원한 정보에 대해 업무와 지원 횟수 출력
*/
void Apply::countWorkApplyByGeneral(Member member) {
	int count = 0;
	for (int i = 0; i < applyCount; i++) {
		if (applier[i] == member.name)
			++count;
	}

	// 회원이 지원한 경우 지원 정보 출력
	if (count != 0) {
		cout << work << " " << count << endl;
	}
}