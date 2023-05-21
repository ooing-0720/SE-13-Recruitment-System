#include "ShowApplyInformation.h"

ShowApplyInformation::ShowApplyInformation(Apply* applies, Recruitment* recruitments) {
	this->applies = applies;
	this->recruitments = recruitments;
}

/*
* 지원 취소 기능을 하는 함수
*/
void ShowApplyInformation::cancelApply(int companyNumber, string applierID) {

	for (int i = 0; i < sizeof(applies); i++) {
		// 지원 목록 중 현재 로그인한 회원이 지원하였으며
		// 입력받은 사업자 번호와 일치하는 지원 객체인 경우 해당 객체를 삭제
		if (applies[i].getCompanyNumber() == companyNumber && applies[i].getApplierID() == applierID) {
			cout << applies[i].getCompanyName() << " " << companyNumber << " " << applies[i].getWork() << endl;
			applies[i].cancelApply();
		}
	}
}

/*
* 지원 정보 통계 정보를 가져오는 함수
*/

void ShowApplyInformation::showWorkApply(Member member, string ID) {
	// 회사 회원인 경우
	if (typeid(member) == typeid(CompanyMember)) {
		for (int i = 0; i < sizeof(recruitments); i++) {
			// 현재까지 등록한 모든 채용 정보에 대해 업무별 지원자 수 출력
			if (recruitments[i].getWriterID() == ID) {
				cout << recruitments[i].getWork() << " " << recruitments[i].getApplyCount();
			}
		}
	}
	// 일반 회원인 경우
	else {
		for (int i = 0; i < sizeof(applies); i++) {
			// 본인이 지원한 정보에 대해 업무별 지원 횟수 출력
			if (applies[i].getApplierID() == ID) {
				cout << applies[i].getWork() << " " << "1" << endl;
			}
		}
	}
}