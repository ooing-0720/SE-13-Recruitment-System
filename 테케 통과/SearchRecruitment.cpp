#include "SearchRecruitment.h"

// 4.1
// 채용 정보를 불러와서 출력하는 함수
vector<tuple<string, int, string, int, string>> SearchRecruitment::ShowRecruitmentList(string companyName, vector<Recruitment>& recruitment) {

    vector<tuple<string, int, string, int, string>> saveRecruitment;

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

// 4.2
// 원하는 채용 정보를 recruitment에서 불러와서 tuple로 return 하는 함수
tuple<string, int, string> SearchRecruitment::addNewApply(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply1) {

    tuple<string, int, string, int, string> targetRecruitment;
    bool find = false;
    for (int i = 0; i < recruitment.size(); i++)
    {
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
    string companyName; int companyNumber2; string work; int TO; string deadlineDate;
    tie(companyName, companyNumber2, work, TO, deadlineDate) = targetRecruitment;
    apply.setApply(companyName, companyNumber2, work, TO, deadlineDate, applierID);
    apply1.push_back(apply);
    return make_tuple(companyName, companyNumber2, work);
}