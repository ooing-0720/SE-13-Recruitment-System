#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

/*
* 채용 정보 등록 boundary class
*/

// 등록할 정보 입출력
void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company) {
    // 채용 정보 입력
    string work;
    int numOfPeople;
    string dueDate;
    inFp >> work >> numOfPeople >> dueDate;

    outFp << "3.1. 채용 정보 등록" << endl;

    //현재 회사회원 이름, 번호 저장
    string companyName = company.getName();
    int companyNumber = company.getNumber();

    // 채용 관리 control class에 입력받은 값 전달
    string result = ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);

    outFp << "> " << result << endl << endl;
};