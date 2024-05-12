#pragma once

#include <string>
#include <iostream>

#include "Author.h"

using namespace std;

//this class is used to store information about a book

class Book
{
public:
    Book(string title, Author *author, string ISBN, int year, string genre);
    Book();
    ~Book();

    void printInfo();

    string getTitle();
    Author *getAuthor();
    string getISBN();
    int getYear();
    string getGenre();

    void setTitle(string title);
    void setAuthor(Author *author);
    void setISBN(string ISBN);
    void setYear(int year);
    void setGenre(string genre);
private:
    string title;
    Author *author;
    string ISBN;
    int year;
    string genre;
};