#include <iostream>
#include "ManageRecruitment.h"
#include <vector>

using namespace std;

/*
* 채용 관리 conotrol class
*/

// 채용 정보 등록 처리
string ManageRecruitment::addNewRecruitment(vector<Recruitment>& recruitments, const string& companyName,
            const int& companyNumber, const string& work, const int& numOfPeople,
            const string& dueDate) {

    // 새로운 채용 정보 생성 후 채용 정보 리스트(vector)에 삽입
    Recruitment newRecruitment(companyName, companyNumber, work, numOfPeople, dueDate);
    recruitments.push_back(newRecruitment);

    string result = work + " " +
        to_string(numOfPeople) + " " +
        dueDate;
    return result;
}

// 자신이 등록한 채용 정보 조회(출력) 처리
vector<Recruitment> ManageRecruitment::showRecruitmentDetail(vector<Recruitment>& recruitments, string name) {

    vector<Recruitment> myRecruitments;

    // 등록된 채용 정보 전체에 대해
    for (int i = 0; i < recruitments.size(); i++) {
        // 현재 로그인한 회원의 이름과 등록된 채용 정보의 이름이 같은 경우
        // 자신이 등록한 채용 정보임
        if (recruitments[i].getCompanyName()== name) {
            myRecruitments.push_back(recruitments[i]);
        }
    }
    return myRecruitments;
}
