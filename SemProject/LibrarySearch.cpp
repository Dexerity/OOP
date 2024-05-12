#include "LibrarySearch.h"

using namespace std;


Book *LibrarySearch::findBook(Library lib, string title)
{
    for (size_t i = 0; i < lib.getBooks().size(); i++)
    {
        if (lib.getBooks()[i]->getTitle() == title)
        {
            return lib.getBooks()[i];
        }
    }
    return nullptr;
}

User *LibrarySearch::findUser(Library lib, string email)
{
    for (size_t i = 0; i < lib.getUsers().size(); i++)
    {
        if (lib.getUsers()[i]->getEmail() == email)
        {
            return lib.getUsers()[i];
        }
    }
    return nullptr;
}

Librarian *LibrarySearch::findLibrarian(Library lib, string email)
{
    for (size_t i = 0; i < lib.getLibrarians().size(); i++)
    {
        if (lib.getLibrarians()[i]->getEmail() == email)
        {
            return lib.getLibrarians()[i];
        }
    }
    return nullptr;
}

Author *LibrarySearch::findAuthor(Library lib, string name)
{
    for (size_t i = 0; i < lib.getAuthors().size(); i++)
    {
        if (lib.getAuthors()[i]->getName() == name)
        {
            return lib.getAuthors()[i];
        }
    }
    return nullptr;
}
