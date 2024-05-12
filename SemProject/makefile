CXX = g++
CXXFLAGS = -std=c++11 -Wall
SOURCES = main.cpp Author.cpp Book.cpp Person.cpp User.cpp Librarian.cpp Library.cpp LibrarySearch.cpp
EXECUTABLE = SemProject

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(SOURCES)

clean:
	rm -f $(EXECUTABLE)
