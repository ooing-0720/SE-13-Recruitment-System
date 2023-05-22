#ifndef RECRUITMENT_H
#define RECRUITMENT_H

#include <string>
#include <vector>
#include <tuple>
using namespace std;

class Recruitment {
private:
    string writerID;			// 채용 정보를 등록한 회사 회원의 ID (지울거임)
    string companyName;
    int companyNumber;
    string work;
    int numOfPeople;
    string dueDate;
    int applyCount;		// 지원자 수

public:
    Recruitment(const string& companyName, const int& companyNumber, const string& work, const int& numOfPeople, const string& dueDate);

    string getWriterID() const;
    string getCompanyName() const;
    int getCompanyNumber() const;
    string getWork() const;
    int getNumOfPeople() const;
    string getDueDate() const;
    int getApplyCount() const;

    tuple<string, int, string, int, string> getRecruiment();

};

#endif