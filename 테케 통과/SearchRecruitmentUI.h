#ifndef SEARCHRECRUITMENTUI_H
#define SEARCHRECRUITMENTUI_H

#pragma once
#include "SearchRecruitment.h"

// 채용 정보(Recruitment)를 화면에 출력하는 boundary class
class SearchRecruitmentUI {
private:
    SearchRecruitment searchRecruitment;
public:
    SearchRecruitmentUI();
    static void SearchByCompanyName(string companyName, vector<Recruitment>& recruitment); // 4.1 채용 정보 검색
    void ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply); // 4.2 채용 지원
};


#endif
