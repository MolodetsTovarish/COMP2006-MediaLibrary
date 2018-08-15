#include "Media.h"

// Media defintions
Media::Media() {};

// destructor 
Media::~Media()
{
	std::cout << "Done" << std::endl;
};

// setters
void Media::set_title(string title)
{
	m_title = title;
};


void Media::set_genre(const string genre)
{
	m_genre = genre;
}


void Media::set_year(const int year)
{
	m_year = year;
}

void Media::set_runtime(const float runtime)
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

const float Media::get_runtime()
{
	return m_runtime;
}
