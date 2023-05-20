#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>

using namespace std;

class Member{
private:
    string id;
    string password;

public:
    Member(const string& id, const string& password);

    string GetId() const;
    
    string GetPassword() const;

    //ID, Password validation
    bool ValidateMember(const string& inputId, const string& inputPassword);

};
#endif