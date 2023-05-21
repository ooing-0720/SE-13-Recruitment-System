#ifndef SEARCHEMPLOYMENTUI_H
#define SEARCHEMPLOYMENTUI_H

#pragma once
#include "SearchEmployment.h"

// 채용 정보(Recruitment)를 화면에 출력하는 boundary class
class SearchEmploymentUI {
private:
    SearchEmployment searchEmployment;
public:
    SearchEmploymentUI();
    static void SearchByCompanyName(string company_name, vector<Recruitment> &recruitment);
    Apply ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment);
};


#endif
