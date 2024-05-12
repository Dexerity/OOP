#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "Book.h"
#include "User.h"
#include "Librarian.h"
#include "Author.h"

using namespace std;

//this class is used to store all the information about the library

class Library
{
public:
    Library(string name, string address);

    void printInfo();
    void printBooks();
    void printAuthors();

    void addLibrarian(Librarian* librarian);
    void removeLibrarian(Librarian* librarian);

    string getName();
    string getAddress();
    vector<Book*> getBooks();
    vector<User*> getUsers();
    vector<Librarian*> getLibrarians();
    vector<Author*> getAuthors();

    void setBooks(vector<Book*> books);
    void setUsers(vector<User*> users);
    void setLibrarians(vector<Librarian*> librarians);
    void setAuthors(vector<Author*> authors);

    void setName(string name);
    void setAddress(string address);
private:
    string name;
    string address;

    vector<Book*> books;
    vector<User*> users;
    vector<Librarian*> librarians;
    vector<Author*> authors;
};