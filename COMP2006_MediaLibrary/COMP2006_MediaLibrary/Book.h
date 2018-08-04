//#ifndef _BOOK_H_
//#define _BOOK_H_

#pragma once
#include <string>

using namespace std;
#include <iostream>

class Book
{
public:
	//constructors
	Book() {};
	Book(const string &title, const string &author, const string &genre, const int &num_of_pages, const int &year);

	//copy constructor
	Book(const Book &other);

	//destructor
	~Book();

	//getters
	const string get_title();
	const string get_author();
	const string get_genre();
	const int get_num_of_pages();
	const int get_year();

	//setters
	void set_title(const string &title);
	void set_author(const string &author);
	void set_genre(const string &genre);
	void set_num_of_pages(const int &num_of_pages);
	void set_year(const int &year);

	//custom methods
	const string get_book();

	void set_book(const string &title, const string &author, const string &genre, const int &num_of_pages, const int &year);

private:
	string m_title;
	string m_author;
	string m_genre;
	int m_num_of_pages;
	int m_year;
};

//#endif
