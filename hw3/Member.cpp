#include <iostream>
#include "Member.h"

Member::Member(const string& id, const string& password) : id(id), password(password), status(false){};


string Member::getID() const { return id; }

string Member::getPassword() const { return password; }

bool Member::getStatus() const { return status; }
void Member::setStatus(bool status) { this->status = status; }


string Member::validate() {
    return std::string();
}

void Member::saveMember(int i) {

}

void Member::deleteMember() {

}
