#include "Apply.h"

void Apply::setApply(string _companyName, int _companyNumber, string _work, int _TO, string _deadlineDate, Member* _applier) {
	this->companyName = _companyName;
	this->companyNumber = _companyNumber;
	this->work = _work;
	this->TO = _TO;
	this->deadlineDate = _deadlineDate;
	this->applier = _applier;
}

int Apply::getCompanyNumber() {
	return companyNumber;
}

int Apply::getApplyCount() {
	return applyCount;
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
		if (applier[i].name == member.name) {
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
	cout << work << " " << applyCount << endl;
}

/*
* �Ϲ� ȸ�� ���� ���� ��� ���
* ������ ������ ������ ���� ������ ���� Ƚ�� ���
*/
void Apply::countWorkApplyByGeneral(Member member) {
	int count = 0;
	for (int i = 0; i < applyCount; i++) {
		if (applier[i] == member.name)
			++count;
	}

	// ȸ���� ������ ��� ���� ���� ���
	if (count != 0) {
		cout << work << " " << count << endl;
	}
}