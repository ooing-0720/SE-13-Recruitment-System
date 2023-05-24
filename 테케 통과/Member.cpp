#include <iostream>
#include "Member.h"

Member::Member(const std::string &type, const std::string &name, const int &number, const std::string &id,
               const std::string &password)
               :type(type), name(name), number(number), id(id), password(password){};

//getter
string Member::getName() const { return name; }

int Member::getNumber() const { return number; }

string Member::getID() const { return id; }

string Member::getPassword() const { return password; }

bool Member::getStatus() const { return status; }
void Member::setStatus(bool status) { this->status = status; }

//회원가입 되어있는지 확인
bool Member::validate(vector<Member>& members, const std::string &inputId, const std::string &inputPassword) {
    for(Member i : members){
        if(i.getID() == inputId){
            return false;
        }
    }
    return true;
}

void Member::saveMember(int i) {

}

void Member::deleteMember() {
    delete this;
}

string Member::getType() const {
    if(this->type == "CompanyMember") return "CompanyMember";
    else if (this->type == "GeneralMember") return "GeneralMember";
}