//#ifndef _BOOK_H_
//#define _BOOK_H_

#pragma once
#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

class Book : public Media
{
public:
	//constructors
	Book();
	Book(const string title, const string author, const string genre, const int num_of_pages, const int year);

	//copy constructor
	Book(const Book &other);

	//destructor
	~Book();

	//getters
	const string get_author();
	const int get_num_of_pages();

	//setters
	void set_author(const string author);
	void set_num_of_pages(const int num_of_pages);


	// custom output
	const string output();


private:
	string m_author;
	int m_num_of_pages;
};

//#endif