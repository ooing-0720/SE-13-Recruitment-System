#include "CompanyMember.h"

CompanyMember::CompanyMember(const std::string &name, const int &number, const std::string &id,
                             const std::string &password) : Member("CompanyMember", name, number, id, password){}

string CompanyMember::getType() const { return "CompanyMember"; }