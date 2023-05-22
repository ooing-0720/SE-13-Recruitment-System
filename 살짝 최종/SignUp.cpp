#include "SignUp.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
/*
 * ȸ������ �Լ�
 */
void SignUp::putUserDetails(int devideMemberType, string name, int number, string id, string password)
{
    // ȸ��ȸ�� ����
    if (devideMemberType == 1)
    {
        CompanyMember companyMember(id, password, name, number);
        companyMember.saveMember(devideMemberType);
        cout << "1 " << name << " " << number << " " << id << " " << password << endl;
    }
    // �Ϲ�ȸ�� ����
    else if (devideMemberType == 2)
    {
        GeneralMember generalMember(id, password, name, number);
        generalMember.saveMember(devideMemberType);
        cout << "2 " << name << " " << number << " " << id << " " << password << endl;
    }
}
