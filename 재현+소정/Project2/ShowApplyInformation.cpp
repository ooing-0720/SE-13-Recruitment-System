#include "ShowApplyInformation.h"
#include "CompanyMember.h"
#include <iterator>

ShowApplyInformation::ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment) {
	this->applies = apply;
	this->recruitments = recruitment;
}

// �Ϲ� ȸ�� ������ ���� ������ ����ϴ� �Լ�
void ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {
	cout << "4.3. ���� ���� ��ȸ" << endl;

	sort(apply.begin(), apply.end());
	for (int i = 0; i < apply.size(); i++)
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
void ShowApplyInformation::cancelApply(int companyNumber, string applierID) {

	for (int i = 0; i < sizeof(applies); i++) {
		// ���� ��� �� ���� �α����� ȸ���� �����Ͽ�����
		// �Է¹��� ����� ��ȣ�� ��ġ�ϴ� ���� ��ü�� ��� �ش� ��ü�� ����
		if (applies[i].getCompanyNumber() == companyNumber && applies[i].getApplierID().compare(applierID)) {
			cout << applies[i].getCompanyName() << " " << companyNumber << " " << applies[i].getWork() << endl;
			applies[i].cancelApply();
		}
	}
}

/*
* ���� ���� ��� ������ �������� �Լ�
*/
map<string, int> ShowApplyInformation::showWorkApply(Member member, string ID) {
	map<string, int> countByWork;	// ������ ���� Ƚ���� �����ϴ� map ����
	map<string, int>::iterator it;	// map�� ��ȸ�ϱ� ���� iterator ����

	// ȸ�� ȸ���� ���
	if (typeid(member) == typeid(CompanyMember)) {

		for (int i = 0; i < sizeof(applies); i++) {
			// ������� ����� ��� ä�� ������ ���� ������ ������ �� ���
			if (applies[i].getWriterID().compare(ID)) {
				it = countByWork.find(applies[i].getWork());
				// �ش� ������ map�� ���� ���
				if (it == countByWork.end()) {
					countByWork[applies[i].getWork()] = 1;	// map�� �߰�
				}
				// �ش� ������ map�� �ִ� ���
				else {
					++countByWork[applies[i].getWork()];	// ���� value ���� 1 ����
				}
			}
		}
	}

	// �Ϲ� ȸ���� ���
	else {


		for (int i = 0; i < sizeof(applies); i++) {

			// ������ ������ ������ ���� ������ ���� Ƚ�� ���
			if (applies[i].getApplierID().compare(ID)) {
				it = countByWork.find(applies[i].getWork());

				// �ش� ������ map�� ���� ���
				if (it == countByWork.end()) {
					countByWork[applies[i].getWork()] = 1;	// map�� �߰�
				}
				// �ش� ������ map�� �ִ� ���
				else {
					++countByWork[applies[i].getWork()];	// ���� value ���� 1 ����
				}

			}
		}

		return countByWork;
	}
}