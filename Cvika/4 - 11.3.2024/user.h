#pragma once
#include <string>

using namespace std;

class User{
private:
    string fstName;
    string sndName;
public:
    User(string fstName, string sndName);
    string getName();
};
