#include <iostream>
#include <string.h>
#include <vector>
#include "SignUpUI.h"
#include "SignInUI.h"
#include "SignOutUI.h"
#include "WithDrawalUI.h"
#include "AddRecruitmentUI.h"
#include "ShowRecruitmentUI.h"
#include "SearchRecruitmentUI.h"
#include "ShowApplyInformationUI.h"
#include "Member.h"

using namespace std;

//��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void programExit();

// ���� ����
FILE* inFp, * outFp;

// boundary class ���� ����
SignUpUI signUpUI;
SignInUI signInUI;
SignOutUI signOutUI;
WithDrawalUI withDrawalUI;
AddRecruitmentUI addRecruitmentUI;
ShowRecruitmentUI showRecruitmentUI;
SearchRecruitmentUI searchRecruitmentUI;
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

    vector<Member> member;
    vector<Recruitment> recruitment;
    vector<Apply> apply;

    Member currentMember("none", "0", 0, "0", "0"); // �α��� �� currentMember�� ���� �α��� ���� ȸ�� ����

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
                signUpUI.putUserDetails(member);
                break;
            }
            case 2:		// 1.2 ȸ�� Ż��
            {
                withDrawalUI.clickWithdrawal(currentMember, member);
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menuLevel2)
            {
            case 1:		// 2.1 �α���
            {
               signInUI.putUserDetails(member, currentMember);
                break;
            }
            case 2:		// 2.2 �α׾ƿ�
            {
                signOutUI.signOutUI(currentMember);
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menuLevel2) {
            case 1:        // 3.1 ä�� ���� ���
            {
                addRecruitmentUI.createNewRecruitment(recruitment, currentMember);
                break;
            }
            case 2:        //3.2 ��ϵ� ä�� ���� ��ȸ
            {
                showRecruitmentUI.startInterface(recruitment, currentMember.getName());
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menuLevel2)
            {
            case 1:		// 4.1 ä�� ���� �˻�
            {
                searchRecruitmentUI.SearchByCompanyName(recruitment);
                break;
            }
            case 2:		// 4.2 ä�� ����
            {
                

                searchRecruitmentUI.ApplyEmployment(currentMember.getID(), recruitment, apply);
                break;
            }
            case 3:		// 4.3 ���� ���� ��ȸ
            {
                showApplyInformationUI.inquireApply(currentMember.getID(), apply);
                break;
            }
            case 4:		//4.4 ���� ���
            {
                showApplyInformationUI.cancelApply(currentMember.getID(), apply);
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menuLevel2) {
            case 1:		// 5.1 ���� ���� ���
            {
                showApplyInformationUI.showWorkApply(currentMember, currentMember.getID(), currentMember.getName(), apply, recruitment);
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menuLevel2) {
            case 1:		// 6.1 ����
            {
                programExit();
                isProgramExit = 1;
                break;
            }
            }
            break;
        }
        }
    }
}


void programExit() {

}