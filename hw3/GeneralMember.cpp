#include "GeneralMember.h"

GeneralMember::GeneralMember(const string &id, const string &password, const string &name, const int &residentId)
        : Member(id, password), name(name), residentId(residentId) {};
