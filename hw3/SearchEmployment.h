#ifndef SEARCHEMPLOYMENT_H
#define SEARCHEMPLOYMENT_H

#pragma once
#include <algorithm>
#include "Recruitment.h"
#include "Apply.h"
#include "Member.h"

using namespace std;

class SearchEmployment {
private:
    Apply apply;
public:
    static void ShowEmploymentlist(string company_name, vector<Recruitment>& recruitment);
    Apply addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment);
};

#endif
