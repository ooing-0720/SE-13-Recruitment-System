#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment) {
	this->showApplyInformation = ShowApplyInformation(apply, recruitment);
}

// 4.3 ���� ���� ��ȸ
void ShowApplyInformationUI::inquireApply(string memberID, vector<Apply>& apply) {
	showApplyInformation.showApply(memberID, apply);
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
	showApplyInformation.showWorkApply(member, ID);
}

