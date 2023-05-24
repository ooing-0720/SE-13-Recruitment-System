#ifndef ADD_RECRUITMENT_UI_H
#define ADD_RECRUITMENT_UI_H

#include <string>
#include "Recruitment.h"
#include "CompanyMember.h"

/*
* 채용 정보 등록 boundary class
*/
class AddRecruitmentUI {
public:
    static void createNewRecruitment(vector<Recruitment>& recruitments, Member& company);
};
#endif