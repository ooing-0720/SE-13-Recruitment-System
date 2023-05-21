#include "ShowApplyInformation.h"

// �Ϲ� ȸ�� ������ ���� ������ ����ϴ� �Լ�
void ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {
	cout << "4.3. ���� ���� ��ȸ" << endl;

	sort(apply.begin(), apply.end());
	for(int i = 0; i < apply.size(); i++)
	{
		tuple<string, int, string, int, string, string> a;
		a = apply[i].getApply();
		if (memberID == get<5>(a))
		{
			cout << get<0>(a) << get<1>(a) << get<2>(a) << get<3>(a) << get<4>(a) << endl;
		}
	}
}


/*
* ���� ��� ����� �ϴ� �Լ�
*/
void ShowApplyInformation::cancelApply(Member member, int companyNumber) {
	cout << "4.4. ���� ���" << endl;

	for (int i = 0; i < sizeof(applies); i++) {
		if (applies[i].getCompanyNumber() == companyNumber) {
			applies[i].cancelApply(member);
			cout << applies[i].getCompanyName() << " " << applies[i].getCompanyNumber() << " " << applies[i].getWork() << endl;
			break;
		}
	}
}

/*
* ���� ���� ��� ������ �������� �Լ�
*/

// ���� �α����� ȸ���� ȸ��ȸ���̸� .. ȸ���ȣ�� ��� ���� ..
void ShowApplyInformation::showWorkApply(Member member) {
	// ȸ�� ȸ���� ���
	// ������� ����� ��� ä�� ������ ���� ������ ������ �� ���
	if (typeid(member) == typeid(CompanyMember)) {
		for (int i = 0; i < sizeof(recruitment); i++) {
			if (recruitment[i].getCompanyNumber() == member.getCompanyNumber()) {
				recruitment[i].getApplyCount();
			}
		}
	}
	// �Ϲ� ȸ���� ���
	// ������ ������ ������ ���� ������ ���� Ƚ�� ���
	else {
		for (int i = 0; i < sizeof(applies); i++) {
			applies[i].countWorkApplyByGeneral(member);
		}
	}
}