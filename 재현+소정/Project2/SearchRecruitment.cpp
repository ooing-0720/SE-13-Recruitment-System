#include "SearchRecruitment.h"

// 4.1
// ä�� ������ �ҷ��ͼ� ����ϴ� �Լ�
void SearchRecruitment::ShowRecruitmentList(string companyName, vector<Recruitment>& recruitment) {
	cout << "4.1. ä�� ���� �˻�" << endl;

	sort(recruitment.begin(), recruitment.end());
	for (int i = 0; i < recruitment.size(); i++)
	{
		tuple<string, int, string, int, string> a;
		a = recruitment[i].getRecruiment();
		if (get<0>(a) == companyName)
		{
			cout << get<0>(a) << get<1>(a) << get<2>(a) << get<3>(a) << get<4>(a) << endl;
		}
	}
}

// 4.2
// ���ϴ� ä�� ������ recruitment���� �ҷ��ͼ� tuple�� return �ϴ� �Լ�
Apply SearchRecruitment::addNewApply(int company_number, string applierID, vector<Recruitment>& recruitment) {
	cout << "4.2. ä�� ����" << endl;

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