//#ifndef _MOVIE_H_
//#define _MOVIE_H_

#pragma once
#include <string>

using namespace std;
#include <iostream>

class Movie
{
public:
	//constructors
	Movie();
	Movie(const string title, const string genre, const int year, const float runtime);

	//copy constructor
	Movie(const Movie &other);

	//destructor
	~Movie();

	//getters
	const string get_title();
	const string get_genre();
	const int get_year();
	const float get_runtime();

	//setters
	void set_title(const string title);
	void set_genre(const string genre);
	void set_year(const int year);
	void set_runtime(const float runtime);

	//custom methods
	const string get_movie();

	void set_movie(const string &title, const string &genre, const int &year, const float &runtime);

private:
	string m_title;
	string m_genre;
	int m_year;
	float m_runtime;
};

//#endif
