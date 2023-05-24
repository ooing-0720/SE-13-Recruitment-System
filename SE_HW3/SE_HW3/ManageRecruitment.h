#ifndef MANAGE_RECRUITMENT_H
#define MANAGE_RECRUITMENT_H

#include <string>
#include "Recruitment.h"

/*
* 채용 관리 conotrol class
*/

class ManageRecruitment {
public:
    static string addNewRecruitment(vector<Recruitment>& recruitments, const string& companyName, const int& companyNumber, const string& work, const int& numOfPeople, const string& dueDate);
    static vector<Recruitment> showRecruitmentDetail(vector<Recruitment>& recruitments, string name);
};
#endif