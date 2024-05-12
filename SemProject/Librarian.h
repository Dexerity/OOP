#pragma once

#include <string>
#include <iostream>

#include "Person.h"
#include "Book.h"
#include "User.h"
#include "Author.h"

class Library;

using namespace std;

//this class is used to represent a librarian in the library

class Librarian : public Person
{
public:
    Librarian(string email, string password, string name, int birthYear, Library* library);

    void addBook(Book* book);
    void addUser(User* user);

    void addAuthor(Author* author);

    void removeBook(Book* book);
    void removeUser(User* user);

    void removeAuthor(Author* author);

    virtual void printInfo();

private:
    Library* library;
};