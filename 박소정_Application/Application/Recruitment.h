#include <iostream>
using namespace std;

class Recruitment {
private:
	string writerID;	// ä�� ������ ����� ȸ�� ȸ���� ID
	int companyNumber;
	string work;
	static int applyCount;

public:
	string getWriterID();
	int getCompanyNumber();
	string getWork();
	int getApplyCount();
};