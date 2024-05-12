#pragma once

#include <string>
#include <iostream>

using namespace std;

//this class is used to store information about the author of a book

class Author
{
public:
    Author(string name, int birthYear, string country);
    Author();

    void printInfo();

    string getName();
    int getBirthYear();
    string getCountry();

    void setName(string name);
    void setBirthYear(int birthYear);
    void setCountry(string country);
private:
    string name;
    int birthYear;
    string country;
};