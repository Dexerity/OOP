#include "Book.h"

using namespace std;

Book::Book(string title, Author *author, string ISBN, int year, string genre)
{
    this->title = title;
    this->author = author;
    this->ISBN = ISBN;
    this->year = year;
    this->genre = genre;
}

Book::Book()
{
    title = "";
    author = nullptr;
    ISBN = "";
    year = 0;
    genre = "";
}

Book::~Book()
{
    delete author;
}

void Book::printInfo()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author->getName() << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Year: " << year << endl;
    cout << "Genre: " << genre << endl;
}

string Book::getTitle()
{
    return title;
}

Author *Book::getAuthor()
{
    return author;
}

string Book::getISBN()
{
    return ISBN;
}

int Book::getYear()
{
    return year;
}

string Book::getGenre()
{
    return genre;
}

void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(Author *author)
{
    this->author = author;
}

void Book::setISBN(string ISBN)
{
    this->ISBN = ISBN;
}

void Book::setYear(int year)
{
    this->year = year;
}

void Book::setGenre(string genre)
{
    this->genre = genre;
}