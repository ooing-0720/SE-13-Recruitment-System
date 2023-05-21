#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "main.cpp"
using namespace std;

void Member::Member(string id, string password)
{
    this.id = id;
    this.password = password;
}

void Member::saveMember(int devideMemberType)
{
    if (devideMemberType == 0)
    {
        Member newMember = new CompanyMember(this.companyName, this.companyNumber, this.id, this.password);
        member.push_back(&newMember);
        cout << this.companyName << " " << this.companyNumber << " " << this.id << " " << this.password << endl;
    }
    else if (devideMemberType == 1)
    {
        Member newMember = new GeneralMember(this.name, this.residentId, this.id, this.password);
        member.push_back(&newMember);
        cout << this.name << " " << this.residentId << " " << this.id << " " << this.password << endl;
    }
}

void Member::deleteMember()
{
    for (int i = 0; i < member.size(); i++)
    {
        if (member[i]->id == this.id && member[i]->password == this.password)
        {
            cout << this.id << endl;
            member.erase(member.begin() + i);
            break;
        }
    }
}

int Member::validate()
{
    for (int i = 0; i < member.size(); i++)
    {
        if (member[i]->id == this.id && member[i]->password == this.password)
        {
            cout << this.id << " " << this.password << endl;
            return 1
        }
    }
    return 0
}