#include "Apply.h"

string Apply::getWork() {
	return work;
}

int Apply::getCompanyNumber() {
	return companyNumber;
}

int Apply::getApplyCount() {
	return applyCount;
}

string Apply::getCompanyName() {
	return companyName;
}

Member* Apply::getApplier() {
	return applier;
}

/*
* ���� ��� ���
* ���� �������� ä�� ������ ���� ���� ���
*/
void Apply::cancelApply(Member member) {
	for (int i = 0; i < applyCount - 1; i++) {
		if (applier[i].getId() == member.getId()) {
			applier[i] = applier[i + 1];
		}
	}
	// ȸ�� �� ���� ������ ��ҵǾ����Ƿ� ������ �� 1 ����
	--applyCount;
}

/*
* ȸ�� ȸ�� ���� ���� ��� ���
* �ش� ���� ������ ���� ������ ������ �� ���
*/
void Apply::countWorkApplyByCompany() {
	cout << work << " " << applyCount <<endl;
}

/*
* �Ϲ� ȸ�� ���� ���� ��� ���
* ������ ������ ������ ���� ������ ���� Ƚ�� ���
*/
void Apply::countWorkApplyByGeneral(Member member) {
	int count = 0;
	for (int i = 0; i < applyCount; i++) {
		if (applier[i].getId() == member.getId())
			++count;
	}
	
	// ȸ���� ������ ��� ���� ���� ���
	if (count != 0) {
		cout << work << " " << count << endl;
	}
}