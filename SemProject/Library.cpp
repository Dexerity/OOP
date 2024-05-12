#include "Library.h"

using namespace std;

Library::Library(string name, string address)
{
    this->name = name;
    this->address = address;
}

void Library::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Number of books: " << books.size() << endl;
    cout << "Number of authors: " << authors.size() << endl;
    cout << "Number of librarians: " << librarians.size() << endl;
    cout << "Number of users: " << users.size() << endl;
    cout << endl;
}

string Library::getName()
{
    return name;
}

string Library::getAddress()
{
    return address;
}

void Library::setName(string name)
{
    this->name = name;
}

void Library::setAddress(string address)
{
    this->address = address;
}

void Library::addLibrarian(Librarian* librarian)
{
    librarians.push_back(librarian);
}

void Library::removeLibrarian(Librarian* librarian)
{
    for (size_t i = 0; i < librarians.size(); i++)
    {
        if (librarians[i]->getEmail() == librarian->getEmail())
        {
            librarians.erase(librarians.begin() + i);
            break;
        }
    }
}

void Library::printBooks()
{
    cout << "Books: " << endl;
    for (size_t i = 0; i < books.size(); i++)
    {
        cout << i + 1 << ". " << endl;
        books[i]->printInfo();
        cout << endl;
    }
    cout << endl << endl;
}

void Library::printAuthors()
{
    cout << "Authors: " << endl;
    for (size_t i = 0; i < authors.size(); i++)
    {
        cout << i + 1 << ". " << endl;
        authors[i]->printInfo();
        cout << endl;
    }
    cout << endl << endl;
}

vector<Book*> Library::getBooks()
{
    return books;
}

vector<User*> Library::getUsers()
{
    return users;
}

vector<Librarian*> Library::getLibrarians()
{
    return librarians;
}

vector<Author*> Library::getAuthors()
{
    return authors;
}

void Library::setBooks(vector<Book*> books)
{
    this->books = books;
}

void Library::setUsers(vector<User*> users)
{
    this->users = users;
}

void Library::setLibrarians(vector<Librarian*> librarians)
{
    this->librarians = librarians;
}

void Library::setAuthors(vector<Author*> authors)
{
    this->authors = authors;
}
