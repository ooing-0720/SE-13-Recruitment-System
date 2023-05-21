#include "Recruitment.h"

tuple<string, int, string, int, string> Recruitment::getRecruiment() {
	return make_tuple(companyName, companyNumber, work, TO, deadlineDate);
}