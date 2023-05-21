#include <iostream>
#include "Member.h"
using namespace std;

class GeneralMember : public Member
{
private:
    string name;
    int residentId;

public:
   GeneralMember(string name, int number, string id, string password);
};
