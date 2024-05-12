#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "Person.h"
#include "Book.h"

using namespace std;

//this class is used to represent a user in the library

class User : public Person
{
public:
    User(string email, string password, string name, int birthYear);

    virtual void printInfo();
    void borrowBook(Book* book);
    void returnBook(Book* book);

private:
    int borrowedBooks;
    vector<Book*> books;
};