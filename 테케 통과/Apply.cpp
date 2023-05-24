#include "Apply.h"

string Apply::getCompanyName() const{
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

void Apply::setApply(std::string _companyName, int _companyNumber, std::string _work, int _TO, std::string _deadlineDate,
                     std::string _applier) {
    this->companyName = _companyName;
    this->companyNumber = _companyNumber;
    this->work = _work;
    this->TO = _TO;
    this->deadlineDate = _deadlineDate;
    this->applierID = _applier;
}

tuple<string, int, string, int, string, string> Apply::getApply() {
    return make_tuple(companyName, companyNumber, work, TO, deadlineDate, applierID);
}

/*
* 지원 취소 기능
* 일반 회원이 현재 진행중인 채용 정보에 대해 지원 취소
* 해당 객체 삭제
*/
void Apply::cancelApply() {
    delete this;
}