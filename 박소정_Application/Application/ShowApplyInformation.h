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
	Recruitment* recruitments;
public:
	ShowApplyInformation(Apply* applies, Recruitment* recruitments);
	void cancelApply(int companyNumber, string applierID);	// 지원 취소
	void showApply();
	void showWorkApply(Member member, string ID);			// 지원 정보 통계
};
