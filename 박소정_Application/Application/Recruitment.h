#include <iostream>
using namespace std;

class Recruitment {
private:
	string writerID;	// 채용 정보를 등록한 회사 회원의 ID
	int companyNumber;
	string work;
	static int applyCount;

public:
	string getWriterID();
	int getCompanyNumber();
	string getWork();
	int getApplyCount();
};