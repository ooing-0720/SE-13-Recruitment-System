#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
using namespace std;

Member::Member(string id, string password)
{
    this->id = id;
    this->password = password;
}

string Member::getID() {
    return id;
}