#include "ShowApplyInformation.h"

ShowApplyInformation::ShowApplyInformation(Apply* applies, Recruitment* recruitments) {
	this->applies = applies;
	this->recruitments = recruitments;
}

/*
* ���� ��� ����� �ϴ� �Լ�
*/
void ShowApplyInformation::cancelApply(int companyNumber, string applierID) {

	for (int i = 0; i < sizeof(applies); i++) {
		// ���� ��� �� ���� �α����� ȸ���� �����Ͽ�����
		// �Է¹��� ����� ��ȣ�� ��ġ�ϴ� ���� ��ü�� ��� �ش� ��ü�� ����
		if (applies[i].getCompanyNumber() == companyNumber && applies[i].getApplierID() == applierID) {
			cout << applies[i].getCompanyName() << " " << companyNumber << " " << applies[i].getWork() << endl;
			applies[i].cancelApply();
		}
	}
}

/*
* ���� ���� ��� ������ �������� �Լ�
*/

void ShowApplyInformation::showWorkApply(Member member, string ID) {
	// ȸ�� ȸ���� ���
	if (typeid(member) == typeid(CompanyMember)) {
		for (int i = 0; i < sizeof(recruitments); i++) {
			// ������� ����� ��� ä�� ������ ���� ������ ������ �� ���
			if (recruitments[i].getWriterID() == ID) {
				cout << recruitments[i].getWork() << " " << recruitments[i].getApplyCount();
			}
		}
	}
	// �Ϲ� ȸ���� ���
	else {
		for (int i = 0; i < sizeof(applies); i++) {
			// ������ ������ ������ ���� ������ ���� Ƚ�� ���
			if (applies[i].getApplierID() == ID) {
				cout << applies[i].getWork() << " " << "1" << endl;
			}
		}
	}
}