//
//  Theater.cpp
//  Exam 1
//
//  Created by AJ Cendejas on 5/29/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//  I affirm that all code given below was written solely by me,
//  AJ Cendejas, and that any help I received adhered to the
//  rules stated for this exam.
//

#include "Theater.h"
#include "Movie.h"

void Theater::AddMovie(Movie& Movie)
{
    static int i = 0; //So every time this function is called in a for loop it will have previous value.
    MovieList[i] = Movie;
    i++; // Increments i so that every movie in an array can be added sequentially.
}

Movie Theater::GetMovieList(int i)
{
    return MovieList[i];
}

string Theater::GetMovieForHour(int hour)
{
    string movie;
    for(int i = 0; i < HOURS; i ++) //Checks each movie in the theater's list.
    {
        if(MovieList[i].GetShowTime() == hour) //Compares each movie's showtime to parameter 'hour'.
        {
            movie = MovieList[i].GetTitle(); // Assigns the movie title to string movie if correct
            return movie;
        }
            else
            movie = "";
    }
    return movie;
}

int Theater::GetShowTimeForGenre(string genre)
{
    for(int i = 0; i < HOURS; i ++) //Checks each movie in the theater's list.
    {
        if(MovieList[i].GetGenre() == genre) //Compares each movie's genre to the parameter 'genre'.
            return MovieList[i].GetShowTime();
    }
    return -1; //Returns -1 if no movies are found with same genre as the parameter.
}

//Basic get functions to return the value of the private member variables for the prices.
int Theater::GetPopcornPrice()
{
    return PricePopcorn;
}

int Theater::GetCokePrice()
{
    return PriceSoda;
}

//Constructor
Theater::Theater(string name, string phone)
{
    Name = name;
    Phone = phone;
    PricePopcorn = 5;
    PriceSoda = 3;
}

