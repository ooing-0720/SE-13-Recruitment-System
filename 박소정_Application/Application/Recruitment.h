#include <iostream>
using namespace std;

class Recruitment {
private:
	int companyNumber;
	string work;
	static int applyCount;

public:
	int getCompanyNumber();
	string getWork();
	int getApplyCount();
};