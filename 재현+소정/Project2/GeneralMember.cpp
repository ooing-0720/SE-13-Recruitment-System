#include "GeneralMember.h"

GeneralMember::GeneralMember(string name, int number, string id, string password) : Member(id, password)
{
    this->name = name;
    this->residentId = number;
}
