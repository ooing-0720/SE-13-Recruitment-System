#include <iostream>
#include "Apply.h"
#include "Recruitment.h"
using namespace std;

/*
* 지원 정보(Apply)를 처리하는 control class
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
