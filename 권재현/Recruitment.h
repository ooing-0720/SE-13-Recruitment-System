#pragma once
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

class Recruitment {
private:
	string companyName;			// ȸ�� �̸�
	int companyNumber;			// ����� ��ȣ
	string work;				// ����
	int TO;						// �ο� �� (ä�� �ο���)
	string deadlineDate;		// ��û ������
public:
	tuple<string, int, string, int, string> getRecruiment();
};

