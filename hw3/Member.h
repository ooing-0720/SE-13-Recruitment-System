#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>

using namespace std;

class Member{
private:
    string id;
    string password;
    bool status;

public:
    Member(const string& id, const string& password);

    string getID() const;
    string getPassword() const;

    bool getStatus() const;
    void setStatus(bool status);

    //ID, Password validation
    bool ValidateMember(const string& inputId, const string& inputPassword);

    string validate();

    void saveMember(int i);
    void deleteMember();
};
#endif