#include <iostream>
#include "Apply.h"
using namespace std;

/*
* ���� ����(Apply)�� ó���ϴ� control class
*/
class ShowApplyInformation {
private:
	Apply* applies;
public:
	void cancelApply(Member member, int companyNumber);
	void showApply();
	void showWorkApply(Member member);
};
