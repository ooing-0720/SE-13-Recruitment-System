#ifndef SEARCHRECRUITMENT_H
#define SEARCHRECRUITMENT_H

#include "Recruitment.h"
#include "Apply.h"
#include "Member.h"

using namespace std;

class SearchRecruitment {
private:
    Apply apply;
public:
    static vector<tuple<string, int, string, int, string>> showRecruitmentList(string companyName, vector<Recruitment>& recruitment);       // ??? ???? ???
    tuple<string, int, string> addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply);    // ??? ????
};

#endif
