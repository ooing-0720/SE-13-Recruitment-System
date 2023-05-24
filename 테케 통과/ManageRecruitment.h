#ifndef MANAGE_RECRUITMENT_H
#define MANAGE_RECRUITMENT_H

#include <string>
#include "Recruitment.h"


class ManageRecruitment {
public:
    static string addNewRecruitment(vector<Recruitment>& recruitments, const string& companyName, const int& companyNumber, const string& work, const int& numOfPeople, const string& dueDate);
    static bool showRecruitmentDetail(vector<Recruitment>& recruitments);
};
#endif
