#ifndef GENERAL_MEMBER_H
#define GENERAL_MEMBER_H

#include <iostream>
#include "Member.h"

class GeneralMember : public Member{
private:
    string name;
    int residentId;

public:
    GeneralMember(const string &id, const string &password, const string &name, const int &residentId);
};
#endif