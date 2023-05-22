#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>

using namespace std;

void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company) {
    const CompanyMember companyMember = static_cast<const CompanyMember&> (company);
    string companyName = companyMember.getCompanyName();
    int companyNumber = companyMember.getCompanyNumber();
    //ä�� ���� �Է� �ޱ�
    string work;
    int numOfPeople;
    string dueDate;

    cout << "ä������ ��� [����] [�ο���] [������]" << endl;
    cin >> work >> numOfPeople >> dueDate;

    ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);
};
