#include <iostream>
#include "Member.h"
using namespace std;

class CompanyMember : public Member
{
private:
    string companyName;
    int companyNumber;

public:
    CompanyMember(string name, int number, string id, string password);
};
