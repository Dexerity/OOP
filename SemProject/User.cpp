#include "User.h"

using namespace std;

User::User(string email, string password, string name, int birthYear) : Person(email, password, name, birthYear)
{
    borrowedBooks = 0;
}

void User::printInfo()
{
    cout << "Email: " << getEmail() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Birth year: " << getBirthYear() << endl;
    cout << "Total borrowed books: " << borrowedBooks << endl;
    cout << "Book list: " << endl;
    for (size_t i = 0; i < books.size(); i++)
    {
        cout << i + 1 << ". " << books[i]->getTitle() << endl;
    }
    cout << endl;
}

void User::borrowBook(Book* book)
{
    books.push_back(book);
    borrowedBooks++;
}

void User::returnBook(Book* book)
{
    for (size_t i = 0; i < books.size(); i++)
    {
        if (books[i]->getTitle() == book->getTitle())
        {
            books.erase(books.begin() + i);
            break;
        }
    }
}
