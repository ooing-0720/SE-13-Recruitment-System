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
    static vector<tuple<string, int, string, int, string>> ShowRecruitmentList(string companyName, vector<Recruitment>& recruitment);       // 채용 정보 검색
    tuple<string, int, string> addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply);    // 채용 지원
};

#endif

