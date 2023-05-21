#include "CompanyMember.h"

CompanyMember::CompanyMember(const string& id, const string& password, const string& companyName, const string& companyNumber) 
                : Member(id, password), companyName(companyName), companyNumber(companyNumber){};
