#include "ShowApplyInformation.h"

/*
* ���� ����(Apply)�� ȭ�鿡 ����ϴ� boundary class
*/
class ShowApplyInformationUI {
private:
	ShowApplyInformation showApplyInformation;
public:
	ShowApplyInformationUI();
	ShowApplyInformationUI(Apply* applies, Recruitment* recruitments);
	void inquireApply();
	void showWorkApply(Member member, string ID);			// ���� ���� ���
	void cancelApply(int companyNumber, string applierID);	// ���� ���
};
