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
    static int i = 0;
    MovieList[i] = Movie;
    i++;
}

Movie Theater::GetMovieList(int i)
{
    return MovieList[i];
}

string Theater::GetMovieForHour(int hour)
{
    string movie;
    for(int i = 0; i < HOURS; i ++)
    {
        if(MovieList[i].GetShowTime() == hour)
        {
            movie = MovieList[i].GetTitle();
            return movie;
        }
            else
            movie = "";
    }
    return movie;
}

int Theater::GetShowTimeForGenre(string genre)
{
    for(int i = 0; i < HOURS; i ++)
    {
        if(MovieList[i].GetGenre() == genre)
            return MovieList[i].GetShowTime();
    }
    return -1;
}

int Theater::GetPopcornPrice()
{
    return PricePopcorn;
}

int Theater::GetCokePrice()
{
    return PriceSoda;
}

Theater::Theater(string name, string phone)
{
    Name = name;
    Phone = phone;
    PricePopcorn = 5;
    PriceSoda = 3;
}

