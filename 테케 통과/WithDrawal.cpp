#include "WithDrawal.h"
/*
 * 회원탈퇴 함수
 */
string WithDrawal::clickWithdrawal(Member currentMember, vector<Member> &members){
    for (int i = 0; i < members.size(); i++) {
        // 지원 목록 중 현재 로그인한 회원이 지원하였으며
        // 입력받은 사업자 번호와 일치하는 지원 객체인 경우 해당 객체를 삭제
        if (members[i].getID() == currentMember.getID()) {

            string result = "> " + members[i].getID();
            members[i].deleteMember();
            return result;
        }
    }
}
