#include "Apply.h"


string Apply::getCompanyName() {
	return companyName;
}

int Apply::getCompanyNumber() {
	return companyNumber;
}

string Apply::getWork() {
	return work;
}


string Apply::getApplierID() {
	return applierID;
}

string Apply::getWriterID() {
	return writerID;
}

/*
* ���� ��� ���
* �Ϲ� ȸ���� ���� �������� ä�� ������ ���� ���� ���
* �ش� ��ü ����
*/
void Apply::cancelApply() {
	delete this;
}
