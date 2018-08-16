#include "Book.h"

// Book defintions
Book::Book() {};

Book::Book(const string &title, const string &author, const string &genre, const int &num_of_pages, const int &year)
	: Media(title, genre, year)
{
	set_author(author);
	set_num_of_pages(num_of_pages);
};

// destructor 
Book::~Book()
{
	std::cout << "Done" << std::endl;
};

// setters

void Book::set_author(string author)
{
	m_author = author;
};


void Book::set_num_of_pages(const int num_of_pages)
{
	m_num_of_pages = num_of_pages;
}


// getters
const string Book::get_author()
{
	return m_author;
}

const int Book::get_num_of_pages()
{
	return m_num_of_pages;
}

// output
const string Book::output()
{
	return "your book title is " + get_title() + '\n' + "the artist is " + get_author() + '\n' + "the Genre is " + get_genre() + '\n' + "It has " + to_string(get_num_of_pages()) + " tracks in it" + '\n' + "It came out in the year " + to_string(get_year()) + "\n";
}