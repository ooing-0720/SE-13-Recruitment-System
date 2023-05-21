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
	Member* applier;			// ȸ�� ���� ����(�ٵ� �̰� ȸ�� �ֹι�ȣ�� �ϴ°� �� �������� �ʳ�?)

	int applyCount;

public:
	void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, Member* applier);	// ä�� ���� ����
	void getApply();
	int getCompanyNumber();
	int getApplyCount();
	Member* getApplier();
	void cancelApply(Member member);
	void countWorkApplyByCompany();
	void countWorkApplyByGeneral(Member member);
};