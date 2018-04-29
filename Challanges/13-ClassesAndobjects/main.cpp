#include <iostream>
#include <string>
//#include <vector>
#include "Movies.h"


using namespace std;

// Function prototypes
void IncrementWatched(Movies &movies, string name);
void AddMovie(Movies &movies, string name, string rating, int watched);
void CopyingMoviesTest(vector<Movie> *movies);

void AddMovie(Movies &movies, std::string name, std::string rating, int watched) {

    if (movies.Add(name, rating, watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
}

void IncrementWatched(Movies &movies, std::string name) {
    if (movies.IncrementWatched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

void CopyingMoviesTest(Movies movies) {
    movies.Add("ChangedTheCallingMethod", "PG-13",2);
    movies.Display();
    cout << "\nIn 'CopyingMoviesTest" << endl;
}


int main() {
    cout << "Hello, 13-Classes and Objects!" << endl;
    cout << endl;
    /*#######################################################*/


    Movies movies;

    movies.Display();

    AddMovie(movies, "Big", "PG-13",2);                 // OK
    AddMovie(movies,"Star Wars", "PG",5);             // OK
    AddMovie(movies,"Cinderella", "PG",7);           // OK

    movies.Display();   // Big, Star Wars, Cinderella

    AddMovie(movies,"Cinderella", "PG",7);            // Already exists
    AddMovie(movies,"Ice Age", "PG",12);              // OK

    movies.Display();    // Big, Star Wars, Cinderella, Ice Age

    IncrementWatched(movies,"Big");                    // OK
    IncrementWatched(movies,"Ice Age");              // OK

    movies.Display();    // Big and Ice Age watched count incremented by 1

    IncrementWatched(movies,"XXX");         // XXX not found


    //Testing deep copy
    CopyingMoviesTest(movies);


    return 0;
}