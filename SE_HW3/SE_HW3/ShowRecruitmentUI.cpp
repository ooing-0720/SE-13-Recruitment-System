#include "ShowRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <fstream>

extern ifstream inFp;
extern ofstream outFp;

using namespace std;

void ShowRecruitmentUI::startInterface(vector<Recruitment>& recruitment, string name) {

    outFp << "3.2. ��ϵ� ä�� ���� ��ȸ" << endl;

    vector<Recruitment> result = ManageRecruitment::showRecruitmentDetail(recruitment, name);

    for (int i = 0; i < result.size(); i++) {
        outFp << "> " << result[i].getWork() << " " << result[i].getNumOfPeople() << " " << result[i].getDueDate() << endl << endl;
    }


}