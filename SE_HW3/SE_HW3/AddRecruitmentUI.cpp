#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

/*
* ä�� ���� ��� boundary class
*/

// ����� ���� �����
void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company) {
    // ä�� ���� �Է�
    string work;
    int numOfPeople;
    string dueDate;
    inFp >> work >> numOfPeople >> dueDate;

    outFp << "3.1. ä�� ���� ���" << endl;

    //���� ȸ��ȸ�� �̸�, ��ȣ ����
    string companyName = company.getName();
    int companyNumber = company.getNumber();

    // ä�� ���� control class�� �Է¹��� �� ����
    string result = ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);

    outFp << "> " << result << endl << endl;
};