#include <iostream>
using namespace std;

class GeneralMember : public Member
{
private:
    string name;
    int residentId;

public:
    void GeneralMember(string name, int number, string id, string password);
};
