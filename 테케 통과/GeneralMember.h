#ifndef GENERAL_MEMBER_H
#define GENERAL_MEMBER_H

#include <iostream>
#include "Member.h"

class GeneralMember : public Member{
public:
    GeneralMember (const string& name, const int& number, const string& id, const string& password);

    string getType() const;
};
#endif