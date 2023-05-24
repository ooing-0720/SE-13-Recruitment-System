#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>

using namespace std;

void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company){

    cout << "3.1. 채용 정보 등록" << endl;

    //현재 회사회원 이름, 번호 저장
    string companyName = company.getName();
    int companyNumber = company.getNumber();

    //채용 정보 입력 받기
    string work;
    int numOfPeople;
    string dueDate;

    cin >> work >> numOfPeople >> dueDate;

    string result = ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);

    cout << result << endl;
};
