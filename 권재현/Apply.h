#include <iostream>
#include <vector>
#include "Member.h"
using namespace std;

class Apply {
private:
	string companyName;			// ȸ�� �̸�
	int companyNumber;			// ����� ��ȣ
	string work;				// ����
	int TO;						// �ο� �� (ä�� �ο���)
	string deadlineDate;		// ��û ������
	string applierID;				// ä�� ��û�� ID

	int applyCount;

public:
	void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, string applier);	// ä�� ���� ����
	void getApply();
	int getCompanyNumber();
	int getApplyCount();
	string getApplierID();
	void cancelApply(Member member);
	void countWorkApplyByCompany();
	void countWorkApplyByGeneral(Member member);
};