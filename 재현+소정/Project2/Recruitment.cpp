#include "Recruitment.h"

string Recruitment::getWriterID() {
	return writerID;
}

int Recruitment::getCompanyNumber() {
	return companyNumber;
}

string Recruitment::getWork() {
	return work;
}

int Recruitment::getApplyCount() {
	return applyCount;
}

tuple<string, int, string, int, string> Recruitment::getRecruiment() {
	return make_tuple(companyName, companyNumber, work, TO, deadlineDate);
}