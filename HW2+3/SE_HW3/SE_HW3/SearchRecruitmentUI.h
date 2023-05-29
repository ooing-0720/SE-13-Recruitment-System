#ifndef SEARCHRECRUITMENTUI_H
#define SEARCHRECRUITMENTUI_H

#pragma once
#include "SearchRecruitment.h"

/*
* 채용 정보 검색 boundary class
*/

class SearchRecruitmentUI {
private:
    SearchRecruitment searchRecruitment;
public:
    SearchRecruitmentUI();
    static void searchByCompanyName(vector<Recruitment>& recruitment); // 4.1 채용 정보 검색
    void applyRecruitment(string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply); // 4.2 채용 지원
};


#endif