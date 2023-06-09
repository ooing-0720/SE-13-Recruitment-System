#include <iostream>
#include <fstream>
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
ifstream inFp(INPUT_FILE_NAME);
ofstream outFp(OUTPUT_FILE_NAME);



// boundary class 변수 선언
SignUpUI signUpUI;
SignInUI signInUI;
SignOutUI signOutUI;
WithDrawalUI withDrawalUI;
AddRecruitmentUI addRecruitmentUI;
ShowRecruitmentUI showRecruitmentUI;
SearchRecruitmentUI searchRecruitmentUI;
ShowApplyInformationUI showApplyInformationUI;


int main() {
   
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

    Member currentMember("none", "0", 0, "0", "0"); // 로그인 후 currentMember에 현재 로그인 중인 회원 저장

    while (!isProgramExit) {

        // 입력 파일에서 메뉴 숫자 2개 읽기
        inFp >> menuLevel1 >> menuLevel2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menuLevel1)
        {
        case 1:
        {
            switch (menuLevel2)
            {
            case 1:		// 1.1 회원 가입
            {
                signUpUI.putUserDetails(member);
                break;
            }
            case 2:		// 1.2 회원 탈퇴
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
            case 1:		// 2.1 로그인
            {
               signInUI.putUserDetails(member, currentMember);
                break;
            }
            case 2:		// 2.2 로그아웃
            {
                signOutUI.signOutUI(currentMember);
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menuLevel2) {
            case 1:        // 3.1 채용 정보 등록
            {
                addRecruitmentUI.createNewRecruitment(recruitment, currentMember);
                break;
            }
            case 2:        //3.2 등록된 채용 정보 조회
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
            case 1:		// 4.1 채용 정보 검색
            {
                searchRecruitmentUI.searchByCompanyName(recruitment);
                break;
            }
            case 2:		// 4.2 채용 지원
            {
                

                searchRecruitmentUI.applyRecruitment(currentMember.getID(), recruitment, apply);
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
                showApplyInformationUI.showWorkApply(currentMember, currentMember.getID(), currentMember.getName(), apply, recruitment);
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
    outFp << "6.1. 종료" << endl;
}