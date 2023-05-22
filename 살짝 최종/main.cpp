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

//boundary class ���� ����
SignUpUI signUpUi;
SignInUI signInUi;
SignOutUI signOutUi;
WithDrawalUI withDrawalUi;
AddRecruitmentUI addRecruitmentUi;
ShowRecruitmentUI showRecruitmentUi;
SearchRecruitmentUI searchRecruitmentUi;
ShowApplyInformationUI showApplyInformationUI;


int main() {
    cout << "Hello, World!" << std::endl;

    // ���� ������� ���� �ʱ�ȭ
    //inFp = fopen(INPUT_FILE_NAME, "r+");
    //outFp = fopen(OUTPUT_FILE_NAME, "w+");

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

    // �׽�Ʈ �ڵ��� ----------------------------------------------------------
    Recruitment newRecruitment("Samsung", 1234, "qwer", 30, "12/34/56");
    recruitment.push_back(newRecruitment);
    Recruitment newRecruitment2("LG", 9876, "qwer", 100, "12/34/56");
    recruitment.push_back(newRecruitment2);
    Recruitment newRecruitment3("Apple", 4567, "qwer", 50, "12/34/56");
    recruitment.push_back(newRecruitment3);
    // �׽�Ʈ �ڵ��� ----------------------------------------------------------

    Member currentMember("0", "0"); // �α��� �� ���⿡ ���� �α��� ���� ȸ�� ����

    while (!isProgramExit) {
        // �Է� ���Ͽ��� �޴� ���� 2�� �б�
//        fscanf(inFp, "%d %d ", &menuLevel1, &menuLevel2);

        cout << "test�Է�" << endl;
        cin >> menuLevel1 >> menuLevel2; //test�� �Է�

        // �޴� ���� �� �ش� ���� ����
        switch (menuLevel1)
        {
        case 1:
        {
            switch (menuLevel2)
            {
            case 1:		// 1.1 ȸ�� ����
            {
                int devideMemberType;
                string name;
                int number;
                string id;
                string password;
                cin >> devideMemberType >> name >> number >> id >> password;
                signUpUi.putUserDetails(devideMemberType, name, number, id, password);
                break;
            }
            case 2:		// 1.2 ȸ�� Ż��
            {
                withDrawalUi.clickWithdrawal(currentMember);
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
                string id;
                string password;
                cin >> id >> password;
                currentMember = Member(id, password);
                currentMember.setStatus(true);
                signInUi.putUserDetails(id, password);
                break;
            }
            case 2:		// 2.2 �α׾ƿ�
            {
                signOutUi.signOutUI(currentMember);
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menuLevel2) {
            case 1:        // 3.1 ä�� ���� ���
            {
                addRecruitmentUi.createNewRecruitment(recruitment, currentMember);
                break;
            }
            case 2:        //3.2 ��ϵ� ä�� ���� ��ȸ
            {
                showRecruitmentUi.startInterface(recruitment);
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
                string companyName;
                cin >> companyName;
                // fscanf(inFp, "%s", companyName);
                searchRecruitmentUi.SearchByCompanyName(companyName, recruitment);
                break;
            }
            case 2:		// 4.2 ä�� ����
            {
                // companyName, companyNumber, work, TO, deadlineDate ������ �޾ƿ��� �Լ��� �ʿ���
                // apply�� ������ ���� �α������� ȸ���� ID�� �����ؾ� ��
                int companyNumber;
                cin >> companyNumber;
                // fscanf(inFp, "%d", companyNumber);

                searchRecruitmentUi.ApplyEmployment(companyNumber, currentMember.getID(), recruitment, apply);
                break;
            }
            case 3:		// 4.3 ���� ���� ��ȸ
            {
                showApplyInformationUI.inquireApply(currentMember.getID(), apply);
                break;
            }
            case 4:		//4.4 ���� ���
            {
                int companyNumber = 1234;
                showApplyInformationUI.cancelApply(companyNumber, currentMember.getID());
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
                showApplyInformationUI.showWorkApply(currentMember, currentMember.getID());
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
