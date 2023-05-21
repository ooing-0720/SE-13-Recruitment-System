#include <iostream>
#include "Apply.h"
#include "Recruitment.h"
using namespace std;

/*
* ���� ����(Apply)�� ó���ϴ� control class
*/
class ShowApplyInformation {
private:
	Apply* applies;
	Recruitment* recruitments;
public:
	ShowApplyInformation(Apply* applies, Recruitment* recruitments);
	void cancelApply(int companyNumber, string applierID);	// ���� ���
	void showApply();
	void showWorkApply(Member member, string ID);			// ���� ���� ���
};
