//
//  main.cpp
//  Exam 1
//
//  Created by AJ Cendejas on 5/29/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//  I affirm that all code given below was written solely by me,
//  AJ Cendejas, and that any help I received adhered to the
//  rules stated for this exam.
//

#include <iostream>
#include "Movie.h"
#include "Theater.h"
using namespace std;

//Test program (used the same code as provided but changed one thing on the 3rd if statement)
int main()
{
    const int MOVIECOUNT = 11;
    Movie movieListing[] =
    {
        Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
        Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
        Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
        Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
        Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
        Movie("Usual Suspects", "Action", 23),
    };
    
    Theater garland("The Garland", "509-327-2509");
    for (int m = 0; m < MOVIECOUNT; m++)
    {
        garland.AddMovie(movieListing[m]);
    }
    int errors = 0;
    if (garland.GetMovieForHour(-1) != "")
    {
        errors++;
        cout << "error: not handling -1 correctly\n";
    }
    if (garland.GetMovieForHour(25) != "")
    {
        errors++;
        cout << "error: not handling 25 correctly\n";
    }
    //Changed the hour of the next test to 19 to be the same as the value in the array movieListing[].
    if (garland.GetMovieForHour(19) != "Monte Python's Meaning of Life")
    {
        errors++;
        cout << "error: not handling 19 correctly\n";
    }
    if (garland.GetShowTimeForGenre("Comedy") != 0)
    {
        errors++;
        cout << "error: incorrect Comedy\n";
    }
    if (errors == 0)
        cout << "Passed\n";
    else
        cout << "Errors: " << errors << endl;
}