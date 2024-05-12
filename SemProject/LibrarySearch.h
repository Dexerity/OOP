#pragma once

#include <string>
#include <iostream>

#include "Person.h"
#include "Book.h"
#include "User.h"
#include "Librarian.h"
#include "Author.h"
#include "Library.h"

using namespace std;

//This class is used to search for a specific object in the library by its name or email

class LibrarySearch
{
public:
    static Book *findBook(Library lib, string title);
    static User *findUser(Library lib, string email);
    static Librarian *findLibrarian(Library lib, string email);
    static Author *findAuthor(Library lib, string name);
};