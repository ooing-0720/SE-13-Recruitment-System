#pragma once
#include <iostream>
#include <algorithm>
#include "Apply.h"
#include "Recruitment.h"
using namespace std;

/*
* ���� ����(Apply)�� ó���ϴ� control class
*/
class ShowApplyInformation {
private:
	vector<Apply> applies;
	vector<Recruitment> recruitments;
public:
	ShowApplyInformation() {};
	ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment);
	void showApply(string memberID, vector<Apply>& apply);
	void cancelApply(int companyNumber, string applierID);	// ���� ���
	void showWorkApply(Member member, string ID);			// ���� ���� ���
};
