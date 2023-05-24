#include "ShowApplyInformation.h"
#include "CompanyMember.h"
#include <iterator>

ShowApplyInformation::ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->applies = apply;
    this->recruitments = recruitment;
}

bool compareName(const Apply& n1, const Apply& n2) {
    return n1.getCompanyName() < n2.getCompanyName();
};

// 일반 회원 본인의 지원 정보를 출력하는 함수
vector<tuple<string, int, string, int, string, string>> ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {

    vector<tuple<string, int, string, int, string, string>> saveApply;

    sort(apply.begin(), apply.end(), compareName);
    for (int i = 0; i < apply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a;
        a = apply[i].getApply();
        if (memberID == get<5>(a))
        {
            saveApply.push_back(a);
        }
    }
    return saveApply;
}

/*
* 지원 취소 기능을 하는 함수
*/
string ShowApplyInformation::cancelApply(int companyNumber, string applierID, vector<Apply>& apply) {

    for (int i = 0; i < apply.size(); i++) {
        // 지원 목록 중 현재 로그인한 회원이 지원하였으며
        // 입력받은 사업자 번호와 일치하는 지원 객체인 경우 해당 객체를 삭제
        if (apply[i].getCompanyNumber() == companyNumber && apply[i].getApplierID() == applierID) {

            string result = "> " + apply[i].getCompanyName() + " " + to_string(companyNumber) + " " + apply[i].getWork();
            apply[i].cancelApply();
            return result;
        }
    }
}

/*
* 지원 정보 통계 정보를 가져오는 함수
*/
map<string, int> ShowApplyInformation::showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment) {
    map<string, int> countByWork;   // 업무별 지원 횟수를 저장하는 map 변수
    map<string, int>::iterator it;   // map을 순회하기 위한 iterator 변수

    // 회사 회원인 경우
    if (member.getType() == "CompanyMember") {
        for (int i = 0; i < apply.size(); i++) {
            // 현재까지 등록한 모든 채용 정보에 대해 업무별 지원자 수 출력
            if (apply[i].getCompanyName() == companyName) {
                it = countByWork.find(apply[i].getWork());
                // 해당 업무가 map에 없는 경우
                if (it == countByWork.end()) {
                    countByWork[apply[i].getWork()] = 1;// map에 추가
                }
                    // 해당 업무가 map에 있는 경우
                else {
                    ++countByWork[apply[i].getWork()];// 기존 value 값을 1 증가
                }
            }
        }
        return countByWork;
    }

        // 일반 회원인 경우
    else {

        for (int i = 0; i < apply.size(); i++) {
            // 본인이 지원한 정보에 대해 업무별 지원 횟수 출력
            if (apply[i].getApplierID() == id) {
                it = countByWork.find(apply[i].getWork());

                // 해당 업무가 map에 없는 경우
                if (it == countByWork.end()) {
                    countByWork[apply[i].getWork()] = 1;   // map에 추가
                }
                    // 해당 업무가 map에 있는 경우
                else {
                    ++countByWork[apply[i].getWork()];   // 기존 value 값을 1 증가
                }

            }
        }
        return countByWork;
    }
}