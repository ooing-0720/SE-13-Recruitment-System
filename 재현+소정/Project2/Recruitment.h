#pragma once
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Recruitment {
private:
	string writerID;			// 채용 정보를 등록한 회사 회원의 ID
	string companyName;			// 회사 이름
	int companyNumber;			// 사업자 번호
	string work;				// 업무
	int TO;						// 인원 수 (채용 인원수)
	string deadlineDate;		// 신청 마감일
	static int applyCount;		// 지원자 수

public:
	string getWriterID();
	int getCompanyNumber();
	string getWork();
	int getApplyCount();
	tuple<string, int, string, int, string> getRecruiment();
};