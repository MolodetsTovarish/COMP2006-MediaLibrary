#include <string>
#include <iostream>
#include "Media.h"

Media::Media() {};
//Constructor
Media::Media(string title, string genre, int year, int runtime) 
{
	set_title(title);
	set_genre(genre);
	set_year(year);
	set_runtime(runtime);
};

// setters
void Media::set_title(const string &title)
{
	m_title = title;
};


void Media::set_genre(const string &genre)
{
	m_genre = genre;
}


void Media::set_year(const int &year)
{
	m_year = year;
}

void Media::set_runtime(const int &runtime)
{
	m_runtime = runtime;
}

// getters
const string Media::get_title()
{
	return m_title;
}

const string Media::get_genre()
{
	return m_genre;
}

const int Media::get_year()
{
	return m_year;
}

const int Media::get_runtime()
{
	return m_runtime;
}
