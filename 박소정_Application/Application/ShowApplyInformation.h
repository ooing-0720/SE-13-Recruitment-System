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
	Recruitment* recruitment;
public:
	void cancelApply(Member member, int companyNumber);
	void showApply();
	void showWorkApply(Member member);
};
