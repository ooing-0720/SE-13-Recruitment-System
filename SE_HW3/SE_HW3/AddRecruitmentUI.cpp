#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>
extern FILE* inFp, * outFp;

using namespace std;

void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company) {
    // 채용 정보 입력
    string work;
    int numOfPeople;
    string dueDate;
    fscanf(inFp, "%s %d %s", &work, &numOfPeople, &dueDate);

    fprintf(outFp, "3.1. 채용 정보 등록\n");

    //현재 회사회원 이름, 번호 저장
    string companyName = company.getName();
    int companyNumber = company.getNumber();


    string result = ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);

    fprintf(outFp, "%s", result);
};