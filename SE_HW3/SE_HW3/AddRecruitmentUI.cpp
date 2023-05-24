#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>
extern FILE* inFp, * outFp;

using namespace std;

void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company) {
    // ä�� ���� �Է�
    string work;
    int numOfPeople;
    string dueDate;
    fscanf(inFp, "%s %d %s", &work, &numOfPeople, &dueDate);

    fprintf(outFp, "3.1. ä�� ���� ���\n");

    //���� ȸ��ȸ�� �̸�, ��ȣ ����
    string companyName = company.getName();
    int companyNumber = company.getNumber();


    string result = ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);

    fprintf(outFp, "%s", result);
};