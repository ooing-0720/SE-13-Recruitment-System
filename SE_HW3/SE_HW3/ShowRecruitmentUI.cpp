#include "ShowRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

void ShowRecruitmentUI::startInterface(vector<Recruitment>& recruitment, string name) {

    outFp << "3.2. 등록된 채용 정보 조회" << endl;

    vector<Recruitment> result = ManageRecruitment::showRecruitmentDetail(recruitment, name);

    for (int i = 0; i < result.size(); i++) {
        outFp << "> " << result[i].getWork() << " " << result[i].getNumOfPeople() << " " << result[i].getDueDate() << endl << endl;
    }


}