#include "user.h"
#include <string>

using namespace std;

User::User(string fstName, string sndName)
{
    this->fstName = fstName;
    this->sndName = sndName;
}

string User::getName()
{
    return (this->fstName + " " + this->sndName);
}