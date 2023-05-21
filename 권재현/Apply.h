#pragma once
#include <iostream>
#include <vector>
#include <tuple>
#include "Member.h"
using namespace std;

class Apply {
private:
	string companyName;			// ȸ�� �̸�
	int companyNumber;			// ����� ��ȣ
	string work;				// ����
	int TO;						// �ο� �� (ä�� �ο���)
	string deadlineDate;		// ��û ������
	string applierID;			// ä�� ��û�� ID

public:
	void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, string applier);	// ä�� ���� ����
	tuple<string, int, string, int, string, string> getApply();
	int getCompanyNumber();
	string getApplierID();
};