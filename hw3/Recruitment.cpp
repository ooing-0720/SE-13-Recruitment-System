#include <iostream>
#include <string>
#include "Recruitment.h"

Recruitment::Recruitment(const std::string &companyName, const int &companyNumber, const std::string &work,
                         const int &numOfPeople, const std::string &dueDate)
                         :companyName(companyName), companyNumber(companyNumber),
                         work(work), numOfPeople(numOfPeople), dueDate(dueDate){}

string Recruitment::getWork() const{
    return work;
}

int Recruitment::getNumOfPeople() const{
    return numOfPeople;
}

string Recruitment::getDueDate() const{
    return dueDate;
}

tuple<string, int, string, int, string> Recruitment::getRecruiment() {
    return make_tuple(companyName, companyNumber, work, numOfPeople, dueDate);
}