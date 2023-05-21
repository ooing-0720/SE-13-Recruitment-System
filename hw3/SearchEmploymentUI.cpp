#include "SearchEmploymentUI.h"

SearchEmploymentUI::SearchEmploymentUI(){
    SearchEmployment *searchEmployment = new SearchEmployment;
}

// 4.1 ä�� ���� �˻�
 void SearchEmploymentUI::SearchByCompanyName(string company_name, vector<Recruitment>& recruitment) {
    SearchEmployment::ShowEmploymentlist(company_name, recruitment);
}

// 4.2 ä�� ����
Apply SearchEmploymentUI::ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment) {
    return searchEmployment.addNewApply(companyNumber, applierID, recruitment);
}