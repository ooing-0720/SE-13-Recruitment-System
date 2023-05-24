#pragma once
#include <iostream>
#include <algorithm>
#include <map>
#include "Apply.h"
#include "Recruitment.h"
using namespace std;

/*
* 지원 정보(Apply)를 처리하는 control class
*/
class ShowApplyInformation {
private:
	vector<Apply> applies;
	vector<Recruitment> recruitments;
public:
	ShowApplyInformation() {};
	ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment);
	void showApply(string memberID, vector<Apply>& apply);
	void cancelApply(int companyNumber, string applierID);	// 지원 취소
	map<string, int> showWorkApply(Member member, string ID);			// 지원 정보 통계
};
