#include "ShowApplyInformation.h"


/*
* ���� ��� ����� �ϴ� �Լ�
*/
void ShowApplyInformation::cancelApply(Member member, int companyNumber) {
	for (int i = 0; i < sizeof(applies); i++) {
		if (applies->getCompanyNumber() == companyNumber) {
			applies[i].cancelApply(member);
		}
	}
}

/*
* ���� ���� ��� ������ �������� �Լ�
*/
void ShowApplyInformation::showWorkApply(Member member) {
	// ȸ�� ȸ���� ���
	// ������� ����� ��� ä�� ������ ���� ������ ������ �� ���
	if (typeid(member) == typeid(CompanyMember)) {
		for (int i = 0; i < sizeof(applies); i++) {
			if (applies[i].getCompanyNumber() == member.companyNumber) {
				applies[i].countWorkApplyByCompany();
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