#include <stdio.h>
#include <string.h>
#include <vector>
#include "ShowApplyInformationUI.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void programExit();

// ���� ����
FILE* inFp, * outFp;

vector<Apply> apply;
vector<Recruitment> recruitment;
vector<Member> member;

// boundary class ���� ����
ShowApplyInformationUI showApplyInformationUI;

int main() {
	// ���� ������� ���� �ʱ�ȭ
	inFp = fopen(INPUT_FILE_NAME, "r+");
	outFp = fopen(OUTPUT_FILE_NAME, "w+");

	doTask();

	return 0;
}

void doTask() {
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menuLevel1 = 0, menuLevel2 = 0;
	int isProgramExit = 0;

	while (!isProgramExit) {
		// �Է� ���Ͽ��� �޴� ���� 2�� �б�
		fscanf(inFp, "%d %d ", &menuLevel1, &menuLevel2);

		// �޴� ���� �� �ش� ���� ����
		switch (menuLevel1)
		{
		case 1:
		{
			switch (menuLevel2)
			{
			case 1:		// 1.1 ȸ�� ���� 
			{
				break;
			}
			case 2:		// 1.2 ȸ�� Ż��
			{
				break;
			}
			}
		}
		case 2:
		{
			switch (menuLevel2)
			{
			case 1:		// 2.1 �α���
			{
				break;
			}
			case 2:		// 2.2 �α׾ƿ�
			{
				break;
			}
			}
		}
		case 3:
		{
			switch (menuLevel2)
			{
			case 1:		// 3.1 ä�� ���� ���
			{
				break;
			}
			case 2:		//3.2 ��ϵ� ä�� ���� ��ȸ
			{
				break;
			}
			}
		case 4:
		{
			switch (menuLevel2)
			{
			case 1:		// 4.1 ä�� ���� �˻�
			{
				break;
			}
			case 2:		// 4.2 ä�� ����
			{
				break;
			}
			case 3:		// 4.3 ���� ���� ��ȸ
			{
				break;
			}
			case 4:		//4.4 ���� ���
			{
				int companyNumber;
				fscanf(inFp, "%d", &companyNumber);

				showApplyInformationUI = ShowApplyInformationUI(applies, recruitments);
				showApplyInformationUI.cancelApply(companyNumber, member.getId());
				break;
			}
			}
		}
		case 5:
		{
			switch (menuLevel2) {
			case 1:		// 5.1 ���� ���� ���
			{
				showApplyInformationUI = ShowApplyInformationUI(applies, recruitments);
				showApplyInformationUI.showWorkApply(member, member.getId());
				break;
			}
			}
		}
		case 6:
			switch (menuLevel2) {
			case 1:		// 6.1 ����
			{
				programExit();
				isProgramExit = 1;
				break;
			}
			}
		}

		}
	}
}

void programExit() {

}