#pragma once

#include <string>
#include <iostream>

using namespace std;

//this class is a parent class for all the classes that store information about a person

class Person
{
public:
    Person(string email, string password, string name, int birthYear);

    virtual void printInfo() = 0;

    string getEmail();
    string getPassword();
    string getName();
    int getBirthYear();

    void setEmail(string email);
    void setPassword(string password);
    void setName(string name);
    void setBirthYear(int birthYear);
private:
    string email;
    string password;
    string name;
    int birthYear;
};