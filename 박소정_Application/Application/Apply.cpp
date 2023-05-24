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
* 지원 취소 기능
* 일반 회원이 현재 진행중인 채용 정보에 대해 지원 취소
* 해당 객체 삭제
*/
void Apply::cancelApply() {
	delete this;
}
