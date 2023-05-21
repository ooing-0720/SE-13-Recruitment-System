#include <iostream>
using namespace std;

/*
 * 로그인을 처리하는 control class
 */

class Member
{
private:
    string id;
    string password;

public:
    void Member(string id, string password);
    void saveMember(int devideMemberType);
    void deleteMember();
    int validate();
};
