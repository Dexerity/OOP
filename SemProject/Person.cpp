#include "Person.h"

using namespace std;

Person::Person(string email, string password, string name, int birthYear)
{
    this->email = email;
    this->password = password;
    this->name = name;
    this->birthYear = birthYear;
}

string Person::getEmail()
{
    return email;
}

string Person::getPassword()
{
    return password;
}

string Person::getName()
{
    return name;
}

int Person::getBirthYear()
{
    return birthYear;
}

void Person::setEmail(string email)
{
    this->email = email;
}

void Person::setPassword(string password)
{
    this->password = password;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::setBirthYear(int birthYear)
{
    this->birthYear = birthYear;
}