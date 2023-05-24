#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <vector>
using namespace std;

/*
* ȸ�� entity class
*/

class Member {
private:
    string name;
    int number;
    string id;
    string password;
    string type;
    bool status;

public:
    Member(const string& type, const string& name, const int& number, const string& id, const string& password);


    string getName() const;
    int getNumber() const;
    string getID() const;
    string getPassword() const;
    bool getStatus() const;
    void setStatus(bool status);

    // �α��� �õ��ϴ� ȸ���� ������ ȸ������ Ȯ��
    bool validate(vector<Member>& members, const string& inputId, const string& inputPassword);

    void saveMember(int i);
    void deleteMember();

    string getType() const;
};
#endif