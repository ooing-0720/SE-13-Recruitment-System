#ifndef COMPANY_MEMBER_H
#define COMPANY_MEMBER_H

#include <iostream>
#include "Member.h"

/*
* ȸ�� ȸ�� entity class
*/

class CompanyMember : public Member {
public:
    CompanyMember(const string& name, const int& number, const string& id, const string& password);

    string getType() const;
};
#endif