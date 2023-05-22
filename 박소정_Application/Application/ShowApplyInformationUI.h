#include "ShowApplyInformation.h"
#include <vector>

/*
* ���� ����(Apply)�� ȭ�鿡 ����ϴ� boundary class
*/
class ShowApplyInformationUI {
private:
	ShowApplyInformation showApplyInformation;
public:
	ShowApplyInformationUI();
	ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment);
	void inquireApply();
	void showWorkApply(Member member, string ID);			// ���� ���� ���
	void cancelApply(int companyNumber, string applierID);	// ���� ���
};
