#ifndef RECRUITMENT_H
#define RECRUITMENT_H

#include <string>

using namespace std;

class Recruitment {
private:
    string companyName;
    int companyNumber;
    string work;
    int numOfPeople;
    string dueDate;
public:
    Recruitment(const string& companyName, const int& companyNumber, const string& work, const int& numOfPeople, const string& dueDate);

    string getWork() const;
    int getNumOfPeople() const;
    string getDueDate() const;

    tuple<string, int, string, int, string> getRecruiment();
};

#endif