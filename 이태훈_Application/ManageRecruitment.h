#ifndef MANAGE_RECRUITMENT_H
#define MANAGE_RECRUITMENT_H

#include <string>
#include "Recruitment.h"


class ManageRecruitment {
public:
    static void addNewRecruitment(const string& work, const int& numOfPeople, const string& dueDate);
    static void showRecruitmentDetail();
};
#endif
