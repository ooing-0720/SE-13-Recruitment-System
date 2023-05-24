#ifndef SHOW_APPLY_INFORMATION_H
#define SHOW_APPLY_INFORMATION_H

#include <iostream>
#include <algorithm>
#include <map>
#include "Apply.h"
#include "Recruitment.h"
using namespace std;

/*
* 지원 정보 관리(처리) control class
*/

class ShowApplyInformation {
private:
    vector<Apply> applies;
    vector<Recruitment> recruitments;
public:
    ShowApplyInformation() {};
    ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment);
    vector<tuple<string, int, string, int, string, string>> showApply(string memberID, vector<Apply>& apply);// 지원 정보 조회
    string cancelApply(int companyNumber, string applierID, vector<Apply>& apply); // 지원 취소
    map<string, int> showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment);   // 지원 정보 통계
};

#endif
