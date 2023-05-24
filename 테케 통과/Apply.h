#pragma once
#include <iostream>
#include <vector>
#include <tuple>
#include "Member.h"
using namespace std;

class Apply {
private:
    string companyName;         // 회사 이름
    int companyNumber;         // 사업자 번호
    string work;            // 업무
    int TO;                  // 인원 수 (채용 인원수)
    string deadlineDate;      // 신청 마감일
    string applierID;         // 채용 신청자 ID
    string writerID;         // 채용 등록한 회사 회원 ID

public:
    string getCompanyName() const;
    string getWork();
    int getCompanyNumber();
    string getApplierID();
    string getWriterID();

    void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, string applier);   // 채용 지원 생성
    tuple<string, int, string, int, string, string> getApply();

    void cancelApply();      // 지원 취소

};