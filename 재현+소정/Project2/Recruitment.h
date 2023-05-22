#pragma once
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Recruitment {
private:
	string writerID;			// ä�� ������ ����� ȸ�� ȸ���� ID
	string companyName;			// ȸ�� �̸�
	int companyNumber;			// ����� ��ȣ
	string work;				// ����
	int TO;						// �ο� �� (ä�� �ο���)
	string deadlineDate;		// ��û ������
	static int applyCount;		// ������ ��

public:
	string getWriterID();
	int getCompanyNumber();
	string getWork();
	int getApplyCount();
	tuple<string, int, string, int, string> getRecruiment();
};