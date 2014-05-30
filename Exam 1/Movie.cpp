//
//  Movie.cpp
//  Exam 1
//
//  Created by AJ Cendejas on 5/29/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//  I affirm that all code given below was written solely by me,
//  AJ Cendejas, and that any help I received adhered to the
//  rules stated for this exam.
//

#include "Movie.h"

string Movie::GetTitle()
{
    return Title;
}

string Movie::GetGenre()
{
    return Genre;
}

int Movie::GetShowTime()
{
    return ShowTime;
}

Movie::Movie()
{
    Title = "Spiderman 2";
    Genre = "Action";
    ShowTime = 0;
}

Movie::Movie(string title, string genre, int showtime)
{
    Title = title;
    if(genre == "Action" || genre == "Horror" || genre == "Documentary" || genre == "Comedy")
        Genre = genre;
    else
        Genre = "Comedy";
    ShowTime = showtime;
}