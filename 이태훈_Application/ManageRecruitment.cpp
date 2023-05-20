#include <iostream>
#include "ManageRecruitment.h"
#include <vector>

using namespace std;

vector<Recruitment> recruitments;

void ManageRecruitment::addNewRecruitment(const string& work, const int& numOfPeople, const string& dueDate){
    Recruitment newRecruitment(work, numOfPeople, dueDate);
    recruitments.push_back(newRecruitment);
}

void ManageRecruitment::showRecruitmentDetail(){
    if(recruitments.empty()){
        cout << "등록된 채용 정보가 없습니다. " << endl;
    }
    else {
        for(Recruitment i : recruitments){
            cout 
            << "{ " 
            <<  "["<<i.getWork() << "] " 
            << "[ " <<i.getNumOfPeople() << "] " 
            << "[" << i.getDueDate() << "] "
            << "}" << endl;
        }
    }
}
