#include "SignOut.h"
#include "SignOutUI.h"
#include <iostream>

Member* currentMember = nullptr;

void SignOut::signOut(){
    //로그아웃
    if(currentMember != nullptr){
        currentMember = nullptr;
        cout << "로그아웃 되었습니다. " << endl;
    }
    else{
        cout << "이미 로그아웃 되어있습니다. " << endl;
    }
}