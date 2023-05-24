#include "SearchRecruitment.h"

/*
* 채용 정보 검색 control class
*/

// 입력받은 회사 회원이 등록한 채용 정보 조회 처리
vector<tuple<string, int, string, int, string>> SearchRecruitment::showRecruitmentList(string companyName, vector<Recruitment>& recruitment) {

    vector<tuple<string, int, string, int, string>> saveRecruitment;

    // 모든 채용 정보에 대해
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

// 입력받은 회사 회원이 등록한 채용 정보에 새로운 지원 정보 생성 처리
tuple<string, int, string> SearchRecruitment::addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply1) {

    tuple<string, int, string, int, string> targetRecruitment;
    bool find = false;

    // 모든 채용 정보에 대해
    for (int i = 0; i < recruitment.size(); i++)
    {
        // 해당 채용 정보의 사업자 번호와 입력받은 사업자 번호가 같은 경우
        // 원하는 회사의 채용이 있음
        targetRecruitment = recruitment[i].getRecruiment();
        if (get<1>(targetRecruitment) == companyNumber)
        {
            find = true;
            break;
        }
    }

    // 원하는 회사의 채용이 없는 경우
    if (find == false)
    {
        return make_tuple("0", 0, "0");
    }

    // 원하는 회사의 채용이 있는 경우
    // 해당 채용 정보에 대해 새로운 지원 정보 생성
    string companyName; int companyNumber2; string work; int TO; string deadlineDate;
    tie(companyName, companyNumber2, work, TO, deadlineDate) = targetRecruitment;
    apply.setApply(companyName, companyNumber2, work, TO, deadlineDate, applierID);
    apply1.push_back(apply);
    return make_tuple(companyName, companyNumber2, work);
}