#include "ShowApplyInformationUI.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

/*
* 지원 정보 출력, 관리(처리) boundary class
*/
ShowApplyInformationUI::ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->showApplyInformation = ShowApplyInformation(apply, recruitment);
}

// 자신이 지원한 정보 출력
void ShowApplyInformationUI::inquireApply(string memberID, vector<Apply>& apply) {
    outFp << "4.3. 지원 정보 조회" << endl;
    vector<tuple<string, int, string, int, string, string>> saveApply;
    saveApply = showApplyInformation.showApply(memberID, apply);

    for (int i = 0; i < saveApply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a = saveApply[i];
        outFp << "> " << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << " " << get<3>(a) << " " << get<4>(a) << endl << endl;
    }
}

// 입력받은 회사의 지원 정보 삭제 버튼 클릭(출력)
void ShowApplyInformationUI::cancelApply(string applierID, vector<Apply>& apply) {
    // 지원 취소할 회사의(사업자) 번호 입력
    int companyNumber;
    inFp >> companyNumber;
    
    outFp << "4.4. 지원 취소" << endl;

    string result = showApplyInformation.cancelApply(companyNumber, applierID, apply);

    outFp << "> " << result << endl << endl;
}

// 회사 회원: 자신이 등록한 채용별 지원자 수 출력
// 일반 회원: 자신이 지원한 채용의 업무별 지원 횟수 출력
void ShowApplyInformationUI::showWorkApply(Member member, string id, string companyName, vector<Apply>& apply, vector<Recruitment>& recruitment) {
    outFp << "5.1. 지원 정보 통계" << endl;
    map<string, int> countByWork = showApplyInformation.showWorkApply(member, id, companyName, apply, recruitment);

    for (map<string, int>::iterator it = countByWork.begin(); it != countByWork.end(); it++) {
        outFp << "> " << it->first << " " << it->second << endl;
    }
    outFp << endl;
}