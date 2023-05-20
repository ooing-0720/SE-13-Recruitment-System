#ifndef RECRUITMENT_H
#define RECRUITMENT_H

#include <string>

using namespace std;

class Recruitment {
private:
    string work;
    int numOfPeople;
    string dueDate;
public:
    Recruitment(const string& work, const int& numOfPeople, const string& dueDate);

    string getWork() const;
    int getNumOfPeople() const;
    string getDueDate() const;

};
#endif