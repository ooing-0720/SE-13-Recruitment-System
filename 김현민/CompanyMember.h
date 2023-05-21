#include <iostream>
using namespace std;

class CompanyMember : public Member
{
private:
    string companyName;
    int companyNumber;

public:
    void CompanyMember(string name, int number, string id, string password);
};
