#pragma once
#include "ShowApplyInformation.h"

/*
* 지원 정보(Apply)를 화면에 출력하는 boundary class
*/
class ShowApplyInformationUI {
private:
	ShowApplyInformation showApplyInformation;
public:
	ShowApplyInformationUI() {};
	ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment);
	void inquireApply(string memberID, vector<Apply>& apply);		// 지원 정보 조회
	void cancelApply(int companyNumber, string applierID);			// 지원 취소
	void showWorkApply(Member member, string ID);					// 지원 정보 통계
};