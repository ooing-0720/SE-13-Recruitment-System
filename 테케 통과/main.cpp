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

//상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void programExit();

// 변수 선언
FILE* inFp, * outFp;

//boundary class 변수 선언
SignUpUI signUpUi;
SignInUI signInUi;
SignOutUI signOutUi;
WithDrawalUI withDrawalUi;
AddRecruitmentUI addRecruitmentUi;
ShowRecruitmentUI showRecruitmentUi;
SearchRecruitmentUI searchRecruitmentUi;
ShowApplyInformationUI showApplyInformationUI;


int main() {

    // 파일 입출력을 위한 초기화
    inFp = fopen(INPUT_FILE_NAME, "r+");
    outFp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask() {
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menuLevel1 = 0, menuLevel2 = 0;
    int isProgramExit = 0;


    vector<Member> member;
    vector<Recruitment> recruitment;
    vector<Apply> apply;

    // 테스트 코드임 ----------------------------------------------------------
    Recruitment newRecruitment("Samsung", 1234, "qwer", 30, "12/34/56");
    recruitment.push_back(newRecruitment);
    Recruitment newRecruitment2("LG", 9876, "qwer", 100, "12/34/56");
    recruitment.push_back(newRecruitment2);
    Recruitment newRecruitment3("Apple", 4567, "qwer", 50, "12/34/56");
    recruitment.push_back(newRecruitment3);
    // 테스트 코드임 ----------------------------------------------------------

    Member currentMember("none", "0", 0, "0", "0"); // 로그인 후 여기에 현재 로그인 중인 회원 저장

    while (!isProgramExit) {
        // 입력 파일에서 메뉴 숫자 2개 읽기
//        fscanf(inFp, "%d %d ", &menuLevel1, &menuLevel2);

        cin >> menuLevel1 >> menuLevel2; //test용 입력

        // 메뉴 구분 및 해당 연산 수행
        switch (menuLevel1)
        {
            case 1:
            {
                switch (menuLevel2)
                {
                    case 1:		// 1.1 회원 가입
                     {
                        int devideMemberType;
                        string name;
                        int number;
                        string id;
                        string password;
                        cin >> devideMemberType >> name >> number >> id >> password;
                        signUpUi.putUserDetails(member, devideMemberType, name, number, id, password);
                        break;
                    }
                    case 2:		// 1.2 회원 탈퇴
                    {
                        withDrawalUi.clickWithdrawal(currentMember, member);
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                switch (menuLevel2)
                {
                    case 1:		// 2.1 로그인
                    {
                        string id;
                        string password;
                        cin >> id >> password;
                        signInUi.putUserDetails(member, currentMember,  id, password);
                        break;
                    }
                    case 2:		// 2.2 로그아웃
                    {
                        signOutUi.signOutUI(currentMember);
                        break;
                    }
                }
                break;
            }
            case 3: {
                switch (menuLevel2) {
                    case 1:        // 3.1 채용 정보 등록
                    {
                        addRecruitmentUi.createNewRecruitment(recruitment, currentMember);
                        break;
                    }
                    case 2:        //3.2 등록된 채용 정보 조회
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
                        case 1:		// 4.1 채용 정보 검색
                        {
                            string company_name;
                            cout << "회사이름" << endl;
                            cin >> company_name;
//                            fscanf(inFp, "%s", company_name);
                            searchRecruitmentUi.SearchByCompanyName(company_name, recruitment);
                            break;
                        }
                        case 2:		// 4.2 채용 지원
                        {
                            // companyName, companyNumber, work, TO, deadlineDate ������ �޾ƿ��� �Լ��� �ʿ���
                            // apply�� ������ ���� �α������� ȸ���� ID�� �����ؾ� ��
                            int companyNumber;
                            cin >> companyNumber;
                            // fscanf(inFp, "%d", companyNumber);

                            searchRecruitmentUi.ApplyEmployment(companyNumber, currentMember.getID(), recruitment, apply);
                            break;
                        }
                        case 3:		// 4.3 지원 정보 조회
                        {
                            showApplyInformationUI.inquireApply(currentMember.getID(), apply);
                            break;
                        }
                        case 4:		//4.4 지원 취소
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
                        case 1:		// 5.1 지원 정보 통계
                        {
                            showApplyInformationUI.showWorkApply(currentMember, currentMember.getID(),currentMember.getName(), apply, recruitment);
                            break;
                        }
                    }
                    break;
                }
                case 6:
                {
                    switch (menuLevel2) {
                        case 1:		// 6.1 종료
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
