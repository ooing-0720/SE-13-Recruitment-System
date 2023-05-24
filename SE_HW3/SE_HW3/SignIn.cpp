#include "SignIn.h"
#include <typeinfo>

/*
 * 로그인 control class
 */

 // 로그인 처리
string SignIn::putUserDetails(vector<Member>& members, Member& currentMember, std::string id, std::string password) {
    
    // 가입한 회원 전체에 대해
    for (Member i : members) {
        // 입력받은 id, pw와 같은 값을 갖는 회원이 있다면 로그인 성공
        if (i.getID().compare(id) == 0 && i.getPassword() == password) {
            currentMember = i;
            currentMember.setStatus(true);

            string result = currentMember.getID() + " " + currentMember.getPassword();
            return result;
        }
    }
    // 가입한 회원 중 일치하는 값을 갖는 회원이 없는 경우 실패
    string result = "등록된 회원 없음";
    return result;
}