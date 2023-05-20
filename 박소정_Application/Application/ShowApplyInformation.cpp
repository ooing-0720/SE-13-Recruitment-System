#include "ShowApplyInformation.h"


/*
* 지원 취소 기능을 하는 함수
*/
void ShowApplyInformation::cancelApply(Member member, int companyNumber) {
	for (int i = 0; i < sizeof(applies); i++) {
		if (applies->getCompanyNumber() == companyNumber) {
			applies[i].cancelApply(member);
		}
	}
}

/*
* 지원 정보 통계 정보를 가져오는 함수
*/
void ShowApplyInformation::showWorkApply(Member member) {
	// 회사 회원인 경우
	// 현재까지 등록한 모든 채용 정보에 대해 업무별 지원자 수 출력
	if (typeid(member) == typeid(CompanyMember)) {
		for (int i = 0; i < sizeof(applies); i++) {
			if (applies[i].getCompanyNumber() == member.companyNumber) {
				applies[i].countWorkApplyByCompany();
			}
		}
	}
	// 일반 회원인 경우
	// 본인이 지원한 정보에 대해 업무별 지원 횟수 출력
	else {
		for (int i = 0; i < sizeof(applies); i++) {
			applies[i].countWorkApplyByGeneral(member);
		}
	}
}