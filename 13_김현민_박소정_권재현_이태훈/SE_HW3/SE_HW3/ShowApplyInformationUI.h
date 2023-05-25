#ifndef SHOW_APPLY_INFORMATIONUI_H
#define SHOW_APPLY_INFORMATIONUI_H

#include "ShowApplyInformation.h"

/*
* ���� ���� ���, ����(ó��) boundary class
*/
class ShowApplyInformationUI {
private:
    ShowApplyInformation showApplyInformation;
public:
    ShowApplyInformationUI() {};
    ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment);
    void inquireApply(string memberID, vector<Apply>& apply);		// ���� ���� ��ȸ
    void cancelApply(string applierID, vector<Apply>& apply);			// ���� ���
    void showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment);					// ���� ���� ���
};

#endif