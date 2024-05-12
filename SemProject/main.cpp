#include <iostream>

#include "Person.h"
#include "User.h"
#include "Librarian.h"
#include "Book.h"
#include "Author.h"
#include "Library.h"
#include "LibrarySearch.h"

using namespace std;

int main()
{
    Library library("National Library", "Ostrava, Czech Republic");

    Librarian *librarian = new Librarian("test@test.com", "1234", "Test Test", 1990, &library);

    library.addLibrarian(librarian);

    Author* author = new Author("J.K. Rowling", 1965, "United Kingdom");
    Author* author2 = new Author("J.R.R. Tolkien", 1892, "United Kingdom");
    Author* author3 = new Author("George R.R. Martin", 1948, "United States");

    librarian->addAuthor(author);
    librarian->addAuthor(author2);
    librarian->addAuthor(author3);

    Book *book = new Book("Harry Potter and the Philosopher's Stone", LibrarySearch::findAuthor(library, "J.K. Rowling"), "978-0-7475-3269-6", 1997, "Fantasy");
    Book *book2 = new Book("The Hobbit", LibrarySearch::findAuthor(library, "J.R.R. Tolkien"), "978-0-261-10221-4", 1937, "Fantasy");
    Book *book3 = new Book("A Game of Thrones", LibrarySearch::findAuthor(library, "George R.R. Martin"), "978-0-553-57340-4", 1996, "Fantasy");

    User *user = new User("m.ozdinec@seznam.cz", "1234", "Martin Ozdinec", 2003);

    librarian->addBook(book);
    librarian->addBook(book2);
    librarian->addBook(book3);

    librarian->addUser(user);

    library.printInfo();
    library.printAuthors();
    library.printBooks();

    user->borrowBook(LibrarySearch::findBook(library, "Harry Potter and the Philosopher's Stone"));
    user->borrowBook(LibrarySearch::findBook(library, "The Hobbit"));

    user->printInfo();

    user->returnBook(LibrarySearch::findBook(library, "Harry Potter and the Philosopher's Stone"));

    user->printInfo();

    return 0;
}

