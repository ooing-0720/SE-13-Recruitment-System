#include "ShowRecruitmentUI.h"
#include "ManageRecruitment.h"

using namespace std;

void ShowRecruitmentUI::startInterface(vector<Recruitment> &recruitment) {

    cout << "3.2. 등록된 채용 정보 조회" << endl;

    bool result = ManageRecruitment::showRecruitmentDetail(recruitment);

    if(result){
        for (Recruitment i : recruitment) {
            cout
                    << "> "
                    << i.getWork() << " "
                    << i.getNumOfPeople() << " "
                    << i.getDueDate() << " " << endl;
        }
    }
    else cout << "등록된 채용정보 없음" << endl;
}