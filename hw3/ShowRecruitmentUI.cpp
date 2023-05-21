#include "ShowRecruitmentUI.h"
#include "ManageRecruitment.h"

void ShowRecruitmentUI::startInterface(vector<Recruitment> &recruitment) {
    ManageRecruitment::showRecruitmentDetail(recruitment);
}