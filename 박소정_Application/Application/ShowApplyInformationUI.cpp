#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI(Apply* applies, Recruitment* recruitments) {
	this->showApplyInformation = ShowApplyInformation(applies, recruitments);
}

/*
* 4.4 지원 취소 입력
*/
void ShowApplyInformationUI::cancelApply(int companyNumber, string applierID) {
	cout << "4.4. 지원 취소" << endl;
	showApplyInformation.cancelApply(companyNumber, applierID);
}

/*
* 5.1 지원 정보 통계 입력
*/
void ShowApplyInformationUI::showWorkApply(Member member, string ID) {
	cout << "5.1. 지원 정보 통계" << endl;
	showApplyInformation.showWorkApply(member);
}

