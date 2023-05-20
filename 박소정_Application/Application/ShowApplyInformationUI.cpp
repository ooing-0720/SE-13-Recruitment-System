#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI() {
	this->showApplyInformation = new ShowApplyInformation();
}

/*
* 4.4 지원 취소 입력
*/
void ShowApplyInformationUI::cancelApply(Member member, int companyNumber) {
	showApplyInformation.cancelApply(member, companyNumber);
}

/*
* 5.1 지원 정보 통계 입력
*/
void ShowApplyInformationUI::showWorkApply(Member member) {
	showApplyInformation.showWorkApply(member);
}

