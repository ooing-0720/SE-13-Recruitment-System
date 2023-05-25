#ifndef SEARCHRECRUITMENTUI_H
#define SEARCHRECRUITMENTUI_H

#pragma once
#include "SearchRecruitment.h"

/*
* ä�� ���� �˻� boundary class
*/

class SearchRecruitmentUI {
private:
    SearchRecruitment searchRecruitment;
public:
    SearchRecruitmentUI();
    static void searchByCompanyName(vector<Recruitment>& recruitment); // 4.1 ä�� ���� �˻�
    void applyRecruitment(string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply); // 4.2 ä�� ����
};


#endif