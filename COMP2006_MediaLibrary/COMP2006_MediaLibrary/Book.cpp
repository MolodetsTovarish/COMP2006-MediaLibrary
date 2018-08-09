#include "Book.h"


// Book defintions
Book::Book() {};

Book::Book(const string title, const string author, const string genre, const int num_of_pages, const int year)
{
	set_title(title);
	set_author(author);
	set_genre(genre);
	set_num_of_pages(num_of_pages);
	set_year(year);
};

// destructor 
Book::~Book()
{
	std::cout << "Done" << std::endl;
};

// setters
void Book::set_title(string title)
{
	m_title = title;
};

void Book::set_author(const string author)
{
	m_author = author;
}

void Book::set_genre(const string genre)
{
	m_genre = genre;
}

void Book::set_num_of_pages(const int num_of_pages)
{
	m_num_of_pages = num_of_pages;
}

void Book::set_year(const int year)
{
	m_year = year;
}

// getters
const string Book::get_title()
{
	return m_title;
}

const string Book::get_author()
{
	return m_author;
}

const string Book::get_genre()
{
	return m_genre;
}

const int Book::get_num_of_pages()
{
	return m_num_of_pages;
}

const int Book::get_year()
{
	return m_year;
}
