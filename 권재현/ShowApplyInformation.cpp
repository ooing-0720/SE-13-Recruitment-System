#include "ShowApplyInformation.h"

// 일반 회원 본인의 지원 정보를 출력하는 함수
void ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {
	cout << "4.3. 지원 정보 조회" << endl;

	sort(apply.begin(), apply.end());
	for(int i = 0; i < apply.size(); i++)
	{
		tuple<string, int, string, int, string, string> a;
		a = apply[i].getApply();
		if (memberID == get<5>(a))
		{
			cout << get<0>(a) << get<1>(a) << get<2>(a) << get<3>(a) << get<4>(a) << endl;
		}
	}
}


/*
* 지원 취소 기능을 하는 함수
*/
void ShowApplyInformation::cancelApply(Member member, int companyNumber) {
	cout << "4.4. 지원 취소" << endl;

	for (int i = 0; i < sizeof(applies); i++) {
		if (applies[i].getCompanyNumber() == companyNumber) {
			applies[i].cancelApply(member);
			cout << applies[i].getCompanyName() << " " << applies[i].getCompanyNumber() << " " << applies[i].getWork() << endl;
			break;
		}
	}
}

/*
* 지원 정보 통계 정보를 가져오는 함수
*/

// 현재 로그인한 회원이 회사회원이면 .. 회사번호를 어떻게 받지 ..
void ShowApplyInformation::showWorkApply(Member member) {
	// 회사 회원인 경우
	// 현재까지 등록한 모든 채용 정보에 대해 업무별 지원자 수 출력
	if (typeid(member) == typeid(CompanyMember)) {
		for (int i = 0; i < sizeof(recruitment); i++) {
			if (recruitment[i].getCompanyNumber() == member.getCompanyNumber()) {
				recruitment[i].getApplyCount();
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