#include "GeneralMember.h"

GeneralMember::GeneralMember(const std::string &name, const int &number, const std::string &id,
                             const std::string &password) : Member("GeneralMember",name, number, id, password){}

string GeneralMember::getType() const { return "GeneralMember"; }
