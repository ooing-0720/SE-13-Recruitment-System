#pragma once
#include "ShowApplyInformation.h"

/*
* 지원 정보(Apply)를 화면에 출력하는 boundary class
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
