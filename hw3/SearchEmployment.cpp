#include "SearchEmployment.h"

// 4.1
// 채용 정보를 불러와서 출력하는 함수
void SearchEmployment::ShowEmploymentlist(string company_name, vector<Recruitment>& recruitment) {
    cout << "4.1. 채용 정보 검색" << endl;
//    sort(recruitment.begin(), recruitment.end()); //Recruitment 클래스에 비교 연산자 정의 x
    for (int i = 0; i < recruitment.size(); i++)
    {
        tuple<string, int, string, int, string> a;
        a = recruitment[i].getRecruiment();
        if (get<0>(a).compare(company_name) == 0)
        {
            cout << get<0>(a) << get<1>(a) << get<2>(a) << get<3>(a) << get<4>(a) << endl;
        }
    }
}

// 4.2
// 원하는 채용 정보를 recruitment에서 불러와서 tuple로 return 하는 함수
Apply SearchEmployment::addNewApply(int company_number, string applierID, vector<Recruitment>& recruitment) {
    cout << "4.2. 채용 지원" << endl;

    tuple<string, int, string, int, string> targetRecruitment;
    bool find = false;
    for (int i = 0; i < recruitment.size(); i++)
    {
        targetRecruitment = recruitment[i].getRecruiment();
        if (get<1>(targetRecruitment) == company_number)
        {
            find = true;
            break;
        }
    }

    if (find == false)
    {
        apply.setApply("0", 0, "0", 0, "0", "-1");
        return apply;
    }

    string companyName; int companyNumber; string work; int TO; string deadlineDate;
    tie(companyName, companyNumber, work, TO, deadlineDate) = targetRecruitment;
    apply.setApply(companyName, companyNumber, work, TO, deadlineDate, applierID);
    cout << companyName << companyNumber << work << endl;
    return apply;
}