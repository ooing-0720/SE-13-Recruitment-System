#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment) {
	this->showApplyInformation = ShowApplyInformation(apply, recruitment);
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
	map<string, int> countByWork = showApplyInformation.showWorkApply(member, ID);
	
	for (map<string, int>::iterator it = countByWork.begin(); it != countByWork.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
}

