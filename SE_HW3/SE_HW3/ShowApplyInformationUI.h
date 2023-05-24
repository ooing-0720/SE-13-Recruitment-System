#pragma once
#include "ShowApplyInformation.h"

/*
* ���� ����(Apply)�� ȭ�鿡 ����ϴ� boundary class
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