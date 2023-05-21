#pragma once
#include "ShowApplyInformation.h"

/*
* ���� ����(Apply)�� ȭ�鿡 ����ϴ� boundary class
*/
class ShowApplyInformationUI {
private:
	ShowApplyInformation showApplyInformation;
public:
	ShowApplyInformationUI();
	void inquireApply(string memberID, vector<Apply>& apply);
	void showWorkApply(Member member);
	void cancelApply(Member member, int companyNumber);
};
