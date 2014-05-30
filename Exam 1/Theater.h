//
//  Theater.h
//  Exam 1
//
//  Created by AJ Cendejas on 5/29/14.
//  Copyright (c) 2014 AJ Cendejas. All rights reserved.
//  I affirm that all code given below was written solely by me,
//  AJ Cendejas, and that any help I received adhered to the
//  rules stated for this exam.
//

#ifndef __Exam_1__Theater__
#define __Exam_1__Theater__

#include <iostream>
#include "Movie.h"

using namespace std;

const int HOURS = 24;

class Theater
{
private:
    //Properties (Public shouldn't be able to change Name, Phone, or Prices of a Theater)
    string Name;
    string Phone;
    Movie MovieList[HOURS];
    int PricePopcorn;
    int PriceSoda;
    
public:
    //Functions
    void AddMovie(Movie& Movie);
    Movie GetMovieList(int i);
    string GetMovieForHour(int hour);
    int GetShowTimeForGenre(string genre);
    int GetPopcornPrice();
    int GetCokePrice();
    
    //Constructor
    Theater(string name, string phone);
    
};

#endif /* defined(__Exam_1__Theater__) */
