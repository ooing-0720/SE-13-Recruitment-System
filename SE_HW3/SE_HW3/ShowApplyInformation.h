#pragma once
#include <iostream>
#include <algorithm>
#include <map>
#include "Apply.h"
#include "Recruitment.h"
using namespace std;

/*
* ���� ����(Apply)�� ó���ϴ� control class
*/
class ShowApplyInformation {
private:
    vector<Apply> applies;
    vector<Recruitment> recruitments;
public:
    ShowApplyInformation() {};
    ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment);
    vector<tuple<string, int, string, int, string, string>> showApply(string memberID, vector<Apply>& apply);// ���� ���� ��ȸ
    string cancelApply(int companyNumber, string applierID, vector<Apply>& apply); // ���� ���
    map<string, int> showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment);   // ���� ���� ���
};