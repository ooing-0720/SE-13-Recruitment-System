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
    void cancelApply(string applierID, vector<Apply>& apply);			// 지원 취소
    void showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment);					// 지원 정보 통계
};