#include "Apply.h"

void Apply::setApply(string _companyName, int _companyNumber, string _work, int _TO, string _deadlineDate, string _applier) {
	this->companyName = _companyName;
	this->companyNumber = _companyNumber;
	this->work = _work;
	this->TO = _TO;
	this->deadlineDate = _deadlineDate;
	this->applierID = _applier;
}

int Apply::getCompanyNumber() {
	return companyNumber;
}

string Apply::getApplierID() {
	return applierID;
}