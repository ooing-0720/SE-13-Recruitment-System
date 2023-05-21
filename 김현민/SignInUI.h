#include "SignIn.h"

/*
 * 로그인 boundary class
 */
class SignInUI
{
private:
    SignIn signIn;

public:
    SignInUI();
    Member putUserDetails(string id, string password);
};
