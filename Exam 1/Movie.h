//
//  Movie.h
//  Exam 1
//
//  Created by AJ Cendejas on 5/29/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//  I affirm that all code given below was written solely by me,
//  AJ Cendejas, and that any help I received adhered to the
//  rules stated for this exam.
//

#ifndef __Exam_1__Movie__
#define __Exam_1__Movie__

#include <iostream>
#include <string>

using namespace std;

class Movie
{
private:
    //Properties
    string Title;
    string Genre;
    int ShowTime;
    
public:
    //Functions to call private properties
    string GetTitle();
    string GetGenre();
    int GetShowTime();
    
    //Constructors for declaring movies and their genre/showtime
    Movie();
    Movie(string title, string genre, int showtime);
    
};

#endif /* defined(__Exam_1__Movie__) */
