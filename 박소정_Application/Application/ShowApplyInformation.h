#include <iostream>
#include <vector>
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
	ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment);
	void cancelApply(int companyNumber, string applierID);	// ���� ���
	void showApply();
	void showWorkApply(Member member, string ID);			// ���� ���� ���
};
