#include <iostream>
using namespace std;

/*
 * 로그인을 처리하는 control class
 */

// 현민님 클래스들 가져와서 썼어요

class Member
{
private:
    string id;
    string password;

public:
    Member(string id, string password);
    string getId();
    /*
    void saveMember(int devideMemberType);
    void deleteMember();
    void validate();
    */
};
