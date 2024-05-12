#include "Author.h"

using namespace std;

Author::Author(string name, int birthYear, string country)
{
    this->name = name;
    this->birthYear = birthYear;
    this->country = country;
}

Author::Author()
{
    name = "";
    birthYear = 0;
    country = "";
}

void Author::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "Birth year: " << birthYear << endl;
    cout << "Country: " << country << endl;
}

string Author::getName()
{
    return name;
}

int Author::getBirthYear()
{
    return birthYear;
}

string Author::getCountry()
{
    return country;
}

void Author::setName(string name)
{
    this->name = name;
}

void Author::setBirthYear(int birthYear)
{
    this->birthYear = birthYear;
}

void Author::setCountry(string country)
{
    this->country = country;
}