#include "SearchRecruitment.h"

/*
* ä�� ���� �˻� control class
*/

// �Է¹��� ȸ�� ȸ���� ����� ä�� ���� ��ȸ ó��
vector<tuple<string, int, string, int, string>> SearchRecruitment::showRecruitmentList(string companyName, vector<Recruitment>& recruitment) {

    vector<tuple<string, int, string, int, string>> saveRecruitment;

    // ��� ä�� ������ ����
    for (int i = 0; i < recruitment.size(); i++)
    {
        tuple<string, int, string, int, string> a;
        a = recruitment[i].getRecruiment();
        if (get<0>(a).compare(companyName) == 0)
        {
            saveRecruitment.push_back(a);
        }
    }
    return saveRecruitment;
}

// �Է¹��� ȸ�� ȸ���� ����� ä�� ������ ���ο� ���� ���� ���� ó��
tuple<string, int, string> SearchRecruitment::addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply1) {

    tuple<string, int, string, int, string> targetRecruitment;
    bool find = false;

    // ��� ä�� ������ ����
    for (int i = 0; i < recruitment.size(); i++)
    {
        // �ش� ä�� ������ ����� ��ȣ�� �Է¹��� ����� ��ȣ�� ���� ���
        // ���ϴ� ȸ���� ä���� ����
        targetRecruitment = recruitment[i].getRecruiment();
        if (get<1>(targetRecruitment) == companyNumber)
        {
            find = true;
            break;
        }
    }

    // ���ϴ� ȸ���� ä���� ���� ���
    if (find == false)
    {
        return make_tuple("0", 0, "0");
    }

    // ���ϴ� ȸ���� ä���� �ִ� ���
    // �ش� ä�� ������ ���� ���ο� ���� ���� ����
    string companyName; int companyNumber2; string work; int TO; string deadlineDate;
    tie(companyName, companyNumber2, work, TO, deadlineDate) = targetRecruitment;
    apply.setApply(companyName, companyNumber2, work, TO, deadlineDate, applierID);
    apply1.push_back(apply);
    return make_tuple(companyName, companyNumber2, work);
}