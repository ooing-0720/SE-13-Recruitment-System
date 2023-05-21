#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI(Apply* applies, Recruitment* recruitments) {
	this->showApplyInformation = ShowApplyInformation(applies, recruitments);
}

/*
* 4.4 ���� ��� �Է�
*/
void ShowApplyInformationUI::cancelApply(int companyNumber, string applierID) {
	cout << "4.4. ���� ���" << endl;
	showApplyInformation.cancelApply(companyNumber, applierID);
}

/*
* 5.1 ���� ���� ��� �Է�
*/
void ShowApplyInformationUI::showWorkApply(Member member, string ID) {
	cout << "5.1. ���� ���� ���" << endl;
	showApplyInformation.showWorkApply(member);
}

