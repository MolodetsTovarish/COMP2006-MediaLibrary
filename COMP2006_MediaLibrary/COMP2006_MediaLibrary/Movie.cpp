#include "Movie.h"


// Movie defintions
Movie::Movie() {};

Movie::Movie(const string title, const string genre, const int year, const float runtime)
{
	set_title(title);
	set_genre(genre);
	set_genre(genre);
	set_year(year);
	set_runtime(runtime);
};

// destructor 
Movie::~Movie()
{
	std::cout << "Done" << std::endl;
};

// setters
void Movie::set_title(string title)
{
	m_title = title;
};

void Movie::set_genre(const string genre)
{
	m_genre = genre;
}

void Movie::set_year(const int year)
{
	m_year = year;
}

void Movie::set_runtime(const float runtime)
{
	m_runtime = runtime;
}

// getters
const string Movie::get_title()
{
	return m_title;
}

const string Movie::get_genre()
{
	return m_genre;
}

const int Movie::get_year()
{
	return m_year;
}

const float Movie::get_runtime()
{
	return m_runtime;
}
