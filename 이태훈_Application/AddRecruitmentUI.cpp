#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>

using namespace std;

void createNewRecruitment(){
    //채용 정보 입력 받기
    string work;
    int numOfPeople;
    string dueDate;

    cin >> work >> numOfPeople >> dueDate;
    
    ManageRecruitment::addNewRecruitment(work, numOfPeople, dueDate);

};
