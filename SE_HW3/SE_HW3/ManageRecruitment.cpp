#include <iostream>
#include "ManageRecruitment.h"
#include <vector>

using namespace std;

/*
* ä�� ���� conotrol class
*/

// ä�� ���� ��� ó��
string ManageRecruitment::addNewRecruitment(vector<Recruitment>& recruitments, const string& companyName,
            const int& companyNumber, const string& work, const int& numOfPeople,
            const string& dueDate) {

    // ���ο� ä�� ���� ���� �� ä�� ���� ����Ʈ(vector)�� ����
    Recruitment newRecruitment(companyName, companyNumber, work, numOfPeople, dueDate);
    recruitments.push_back(newRecruitment);

    string result = work + " " +
        to_string(numOfPeople) + " " +
        dueDate;
    return result;
}

// �ڽ��� ����� ä�� ���� ��ȸ(���) ó��
vector<Recruitment> ManageRecruitment::showRecruitmentDetail(vector<Recruitment>& recruitments, string name) {

    vector<Recruitment> myRecruitments;

    // ��ϵ� ä�� ���� ��ü�� ����
    for (int i = 0; i < recruitments.size(); i++) {
        // ���� �α����� ȸ���� �̸��� ��ϵ� ä�� ������ �̸��� ���� ���
        // �ڽ��� ����� ä�� ������
        if (recruitments[i].getCompanyName()== name) {
            myRecruitments.push_back(recruitments[i]);
        }
    }
    return myRecruitments;
}
