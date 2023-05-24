#include <iostream>
#include <vector>
#include <map>
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
	map<string, int> showWorkApply(Member member, string ID);			// ���� ���� ���
};
