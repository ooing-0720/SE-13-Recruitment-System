#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI() {
	this->showApplyInformation = new ShowApplyInformation();
}

/*
* 4.4 ���� ��� �Է�
*/
void ShowApplyInformationUI::cancelApply(Member member, int companyNumber) {
	showApplyInformation.cancelApply(member, companyNumber);
}

/*
* 5.1 ���� ���� ��� �Է�
*/
void ShowApplyInformationUI::showWorkApply(Member member) {
	showApplyInformation.showWorkApply(member);
}

