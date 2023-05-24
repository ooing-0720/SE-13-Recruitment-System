#include "ShowRecruitmentUI.h"
#include "ManageRecruitment.h"
extern FILE* inFp, * outFp;

using namespace std;

void ShowRecruitmentUI::startInterface(vector<Recruitment>& recruitment, string name) {

    fprintf(outFp, "3.2. 등록된 채용 정보 조회\n");

    vector<Recruitment> result = ManageRecruitment::showRecruitmentDetail(recruitment, name);

    for (int i = 0; i < result.size(); i++) {
        fprintf(outFp, "%s %d %s \n", result[i].getWork(), result[i].getNumOfPeople(), result[i].getDueDate());
    }

 //    else cout << "등록된 채용정보 없음" << endl;
}