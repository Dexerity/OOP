#include "Librarian.h"
#include "Library.h"

using namespace std;

Librarian::Librarian(string email, string password, string name, int birthYear, Library* Library) : Person(email, password, name, birthYear)
{
    this->library = Library;
}

void Librarian::printInfo()
{
    cout << "Email: " << getEmail() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Birth year: " << getBirthYear() << endl;
}

void Librarian::addBook(Book* book)
{
    vector<Book*> books = this->library->getBooks();
    books.push_back(book);
    this->library->setBooks(books);
}

void Librarian::addUser(User* user)
{
    vector<User*> users = this->library->getUsers();
    users.push_back(user);
    this->library->setUsers(users);
}

void Librarian::addAuthor(Author* author)
{
    vector<Author*> authors = this->library->getAuthors();
    authors.push_back(author);
    this->library->setAuthors(authors);
}

void Librarian::removeBook(Book* book)
{
    vector<Book*> books = this->library->getBooks();
    for (size_t i = 0; i < books.size(); i++)
    {
        if (books[i]->getTitle() == book->getTitle())
        {
            books.erase(books.begin() + i);
            break;
        }
    }
    this->library->setBooks(books);
}

void Librarian::removeUser(User* user)
{
    vector<User*> users = this->library->getUsers();
    for (size_t i = 0; i < users.size(); i++)
    {
        if (users[i]->getEmail() == user->getEmail())
        {
            users.erase(users.begin() + i);
            break;
        }
    }
    this->library->setUsers(users);
}

void Librarian::removeAuthor(Author* author)
{
    vector<Author*> authors = this->library->getAuthors();
    for (size_t i = 0; i < authors.size(); i++)
    {
        if (authors[i]->getName() == author->getName())
        {
            authors.erase(authors.begin() + i);
            break;
        }
    }
    this->library->setAuthors(authors);
}


