#include "SignUp.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <string>
/*
 * ȸ������ �Լ�
 */
string SignUp::putUserDetails(vector<Member>& member, int devideMemberType, string name, int number, string id, string password)
{
    // ȸ��ȸ�� ����
    if (devideMemberType == 1)
    {
        Member companyMember = CompanyMember(name, number, id, password);
        companyMember.saveMember(devideMemberType);
        member.push_back(companyMember);

        string result = "1 " + name + " " +
            to_string(number) + " " +
            id + " " +
            password;
        return result;
    }
    // �Ϲ�ȸ�� ����
    else if (devideMemberType == 2)
    {
        Member generalMember = GeneralMember(name, number, id, password);
        generalMember.saveMember(devideMemberType);
        member.push_back(generalMember);

        string result = "2 " + name + " " +
            to_string(number) + " " +
            id + " " +
            password;
        return result;
    }
}
