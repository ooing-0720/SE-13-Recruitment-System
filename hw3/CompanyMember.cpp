#include "CompanyMember.h"

CompanyMember::CompanyMember(const string &id, const string &password, const string &companyName, int companyNumber)
        : Member(id, password), companyName(companyName), companyNumber(companyNumber) {}

string CompanyMember::getCompanyName() const { return companyName; }

int CompanyMember::getCompanyNumber() const { return companyNumber; }