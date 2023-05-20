#ifndef COMPANY_MEMBER_H
#define COMPANY_MEMBER_H

#include <iostream>
#include "Member.h"

class CompanyMember : public Member{
private:
    string companyName;
    string companyNumber;

public:
    CompanyMember(const string& id, const string& password, const string& companyName, const string& companyNumber);
    
};
#endif