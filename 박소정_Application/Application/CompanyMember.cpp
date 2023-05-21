#include "CompanyMember.h"

void CompanyMember::CompanyMember(string name, int number, string id, string password) : Member(id, password)
{
    this.companyName = name;
    this.companyNumber = number;
}
