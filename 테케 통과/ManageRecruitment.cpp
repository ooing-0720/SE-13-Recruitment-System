#include <iostream>
#include "ManageRecruitment.h"
#include <vector>

using namespace std;

string ManageRecruitment::addNewRecruitment(vector<Recruitment> &recruitments, const string &companyName,
                                          const int &companyNumber, const string &work, const int &numOfPeople,
                                          const string &dueDate) {
    Recruitment newRecruitment(companyName, companyNumber, work, numOfPeople, dueDate);
    recruitments.push_back(newRecruitment);

    string result = "> " + work + " " +
                    to_string(numOfPeople) + " " +
                    dueDate;
    return result;
}

bool ManageRecruitment::showRecruitmentDetail(vector<Recruitment>& recruitments){
    if(recruitments.empty()) return false;
    else return true;
}

