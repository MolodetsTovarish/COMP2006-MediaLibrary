//#ifndef _MOVIE_H_
//#define _MOVIE_H_

#pragma once
#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

class Movie : public Media
{
public:
	//constructors
	Movie();
	Movie(const string &title, const string &genre, const int &year, const int &runtime);

	//copy constructor
	Movie(const Movie &other);

	//destructor
	~Movie();

	//getters

	//setters

	// custom output
	const string output();


private:

};

//#endif